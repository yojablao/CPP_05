#ifndef FORM_HPP
#define FORM_HPP


#include "Bureaucrat.hpp"
#include  <iostream> 
#include  <exception> 
#include  <string>
class Bureaucrat;

class Form
{
private:
    const std::string Name;
    const int gradrequired;
    const int gradexecute;
    bool sing;

public:
    Form();
    Form(const Form &o);
    Form &operator=(const Form &o);
    Form(const std::string name,int gradrequired,int gradexecute);
    ~Form();
    void beSigned(Bureaucrat &o);

    bool getsign()const;
    class GradeTooHighException :public std::exception
    {
        public:
            virtual const char * what()const throw();
    };
    class GradeTooLowException:public std::exception
    {
        public:
            virtual const char * what() const throw();
    };
    const std::string getname() const;
};
std::ostream& operator<<(std::ostream &os,const Form &o);


#endif