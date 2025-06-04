#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP 

#include "AForm.hpp"

class PresidentialPardonForm :public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);
        virtual ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};


#endif