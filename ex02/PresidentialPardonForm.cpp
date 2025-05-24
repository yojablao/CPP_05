#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string tar):AForm::AForm("ShrubberyCreationForm",145,137,tar)
{}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!getsign())
        throw GradeTooLowException();
    if(executor.getGrade() > 137);
        throw GradeTooLowException();
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{}