#ifndef FORM_HPP
#define FORM_HPP


#include "Bureaucrat.hpp"
#include  <iostream> 
#include  <exception> 
#include  <string>

class Form
{
private:
    const std::string name;
    bool sing;
    int gradrequired;
    int gradexecute;

public:
    Form();
    Form(const Form &o);
    Form &operator=(const Form &o);
    Form(const std::string name,bool sing,int gradrequired,int gradexecute);
    ~Form();
    void beSigned(Bureaucrat &o);
    class GradeTooHighException :public std::exception
    {
        public:
            virtual const char * what()const throw();
    };
};

#endif