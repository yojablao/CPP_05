#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bob("saad", 1); 
    Bureaucrat lol("khadija", 1);
    Bureaucrat president("trump", 1);
    ShrubberyCreationForm shrubbery("shrubbery");
    RobotomyRequestForm robot("robot");
    PresidentialPardonForm white_house("trump");


    //test one
    try {
        
        robot.beSigned(bob);        
        robot.execute(bob); 

        shrubbery.beSigned(lol);       
        shrubbery.execute(lol);



        white_house.beSigned(president);       
        white_house.execute(president);


    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        robot.beSigned(bob);        
        robot.execute(bob);    
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try
    {
        shrubbery.beSigned(lol);       
        shrubbery.execute(lol);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;

    }
    try
    {
        white_house.beSigned(president);       
        white_house.execute(president);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    
    
    return 0;
}
