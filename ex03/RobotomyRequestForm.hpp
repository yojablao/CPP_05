#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP 
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
class RobotomyRequestForm :public AForm
{
    public:
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};


#endif