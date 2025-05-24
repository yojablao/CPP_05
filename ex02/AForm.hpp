#ifndef AFORM_HPP
#define AFORM_HPP


#include "Bureaucrat.hpp"
#include  <iostream> 
#include  <exception> 
#include  <string>
class Bureaucrat;

class AForm
{
private:
    const std::string Name;
    const int gradrequired;
    const int gradexecute;
    bool sing;
    const std::string target;

public:
    AForm();
    AForm(const AForm &o);
    AForm &operator=(const AForm &o);
    AForm(const std::string name,int gradrequired,int gradexecute,std::string target);
    virtual ~AForm();
    void  beSigned(const Bureaucrat &o);
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    std::string getTarget() const;
};
std::ostream& operator<<(std::ostream &os,const AForm &o);


#endif