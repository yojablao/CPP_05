#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm :public AForm 
{
    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};


#endif