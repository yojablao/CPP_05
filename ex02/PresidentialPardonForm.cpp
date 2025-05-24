#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string tar):AForm::AForm(tar +"_PresidentialPardon",25,5,tar)
{}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!getsign())
        throw Notsinged();
    if(executor.getGrade() > 5)
        throw GradeTooLowException();
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{}