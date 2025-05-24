/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:11:17 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/24 17:06:01 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():Name("AForm"),gradrequired(150),gradexecute(150),sing(0){}
AForm::AForm(const std::string s,int gradre,int gradeexce,std::string target):Name(s),gradrequired(gradre),gradexecute(gradeexce),sing(false),target(target)
{
    if(gradre < 1 || gradeexce < 1)
        throw GradeTooHighException();
    if (gradre > 150 || gradeexce > 150)
        throw GradeTooLowException();
}
AForm::AForm(const AForm &o):Name(o.Name),gradrequired(o.gradrequired),gradexecute(o.gradexecute),sing(false){}
const std::string AForm::getname() const
{
    return(Name);
}
AForm &AForm::operator=(const AForm &o)
{
    if(this != &o)
    {
        sing = 0;
    }
    return(*this);
}
void AForm::beSigned(const Bureaucrat &o)
{
    if(gradrequired < o.getGrade())
        throw GradeTooLowException();
    this->sing = true;   
}
AForm::~AForm() {}
std::ostream& operator<<(std::ostream& os,const AForm& o) {
    os  << "AForm : "<<o.getname() << " signed  " << (o.getsign() ?"True":"False");
    return(os);
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return("grade high.");   
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return("grade low.");      
}
const char *AForm::Notsinged::what() const throw()
{
    return ("the Form is not signed ");
}


bool AForm::getsign() const
{return sing;}
std::string AForm::getTarget() const
{return(target);}
