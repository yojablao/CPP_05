#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP 

#include "AForm.hpp"

class PresidentialPardonForm :public AForm
{
    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};


#endif