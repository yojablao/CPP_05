#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

    Intern intern;
    Bureaucrat bob("saad", 1); 
    Bureaucrat lol("khadija", 1);
    Bureaucrat president("trump", 1);

    try
    {
        AForm &form2 = intern.makeForm("RobotomyRequest", "Robot");
        form2.beSigned(bob);  
        form2.execute(bob);  
        delete &form2 ;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try
    {
        AForm& form1 = intern.makeForm("Shrubbery", "Garden");
        form1.beSigned(lol);  
        form1.execute(lol);  
        delete &form1;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;

    }
    try
    {
        AForm& form3 = intern.makeForm("PresidentialPardon", "Criminal");
        form3.beSigned(president);  
        form3.execute(president); 
        delete &form3;  
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    
    
    return 0;
}
