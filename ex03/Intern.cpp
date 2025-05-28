#include "Intern.hpp"

AForm &Intern::makeForm(std::string form,std::string tar)
{
    std::string forms[] = {"Shrubbery","RobotomyRequest","PresidentialPardon"};
    AForm *(*fn[3])(const std::string &) ={Intern::createShrubberyCreationForm,
        Intern::createRobotomyRequestForm,
        Intern::createPresidentialPardonForm};
    for(int i = 0;i < 3;i++)
    {
        if(forms[i] == form)
        {
            AForm *holder = fn[i](tar);
            return *holder;
        }
            
    }
    throw std::invalid_argument("Bad form type: " + form);
}
AForm* Intern::createRobotomyRequestForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}
AForm* Intern::createPresidentialPardonForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}
AForm* Intern::createShrubberyCreationForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}
