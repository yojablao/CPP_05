/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:11:17 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/22 17:40:12 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():Name("Form"),gradrequired(150),gradexecute(150),sing(0){}
Form::Form(const std::string s,int gradre,int gradeexce):Name(s),gradrequired(gradre),gradexecute(gradeexce),sing(false)
{
    if(gradre < 1 || gradeexce < 1)
        throw GradeTooHighException();
    if (gradre > 150 || gradeexce > 150)
        throw GradeTooLowException();
}
Form::Form(const Form &o):Name(o.Name),gradrequired(o.gradrequired),gradexecute(o.gradexecute),sing(false){}
const std::string Form::getname() const
{
    return(Name);
}
Form &Form::operator=(const Form &o)
{
    if(this != &o)
    {
        sing = 0;
    }
    return(*this);
}
void Form::beSigned(Bureaucrat &o)
{
    if(gradrequired < o.getGrade() ||  gradexecute < o.getGrade())
        throw GradeTooLowException();
    this->sing = true;   
}
Form::~Form() {}
std::ostream& operator<<(std::ostream& os,const Form& o) {
    os  << "Form : "<<o.getname() << " signed  " << (o.getsign() ?"True":"False");
    return(os);
}
const char *Form::GradeTooHighException::what() const throw()
{
    return("grade high.");   
}
const char *Form::GradeTooLowException::what() const throw()
{
    return("grade low.");      
}


bool Form::getsign() const{return sing;}