#ifndef BUREAUCRAT
#define BUREAUCRAT


#include  <iostream> 
#include  <exception> 
#include  <string>
#include "AForm.hpp"
class AForm; 
class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &o);
    ~Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat &operator=(const Bureaucrat &o);
    class GradeTooHighException:public std::exception
    {
        public:
            virtual const char * what() const throw();
    };
    class GradeTooLowException:public std::exception
    {
        public:
            virtual const char * what() const throw();
    };
    const std::string& getName() const;
    int     getGrade()const;

    void increment();
    void decrement();
    void signForm(AForm &o);
    void executeForm(AForm const & form);


};
std::ostream &operator<<(std::ostream &out,const Bureaucrat &c);

#endif