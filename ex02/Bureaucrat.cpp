#include "Bureaucrat.hpp"


const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high (Maximun grade is 1)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low (Minimum grade is 150)";
}

// Canonical form implementations
Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) 
    : name(other.name), grade(other.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment() {
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;    
}

void Bureaucrat::decrement() {
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
void Bureaucrat::signForm(AForm &o)
{   
    try
    {
        o.beSigned(*this);
        std::cout << name << " signed " << o.getname()<< std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << name << " couldn’t sign "<< o.getname() << " because " << e.what() << "." << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed "<< form.getname()  << std::endl;

    }
    catch (std::exception &ex)
    {
        std::cout << name << " couldn’t execute "<< form.getname() << " because " << ex.what() << "." << std::endl;
    } 

}