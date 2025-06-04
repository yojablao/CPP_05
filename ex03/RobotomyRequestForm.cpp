#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string tar):AForm(tar + "_robotomy",72,45,tar){}
RobotomyRequestForm::RobotomyRequestForm():AForm("robotomy",72,45,"no target"){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o)
{
    *this = o;

}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &o)
{
    if(this != &o)
        AForm::operator=(o);
    return *this;

}
RobotomyRequestForm::~RobotomyRequestForm(){}
void RobotomyRequestForm::execute(Bureaucrat const  &o) const
{
    if (!getsign())
        throw Notsinged();
    if(o.getGrade() > 45)
        throw GradeTooLowException();
    srand(time(NULL));
    if((int)(rand() % 2) == 0)
        std::cout << "vezzz taq taq  vetvet. the " << getTarget() << " has been robotomized" << std::endl;
    else
        std::cout << "the robotomy failed. Bad luck " <<   getTarget() << std::endl;
    
}