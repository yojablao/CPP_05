#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP 
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
class RobotomyRequestForm :public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm&o);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm&o);
        void execute(Bureaucrat const & executor) const;
        RobotomyRequestForm(std::string target);
};


#endif