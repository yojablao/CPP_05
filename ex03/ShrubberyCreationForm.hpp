#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm :public AForm 
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm&o);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&o);
        virtual ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};


#endif