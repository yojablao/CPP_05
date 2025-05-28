#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern 
{
    private:
        static  AForm *createPresidentialPardonForm(const std::string & tar);
        static  AForm *createRobotomyRequestForm(const std::string & tar);
        static  AForm *createShrubberyCreationForm(const std::string & tar);
    public:
        AForm &makeForm(std::string form,std::string tar);

};
#endif