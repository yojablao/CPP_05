#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 100); // Grade within execution range
        ShrubberyCreationForm shrub("garden");

        shrub.beSigned(bob);         // Sign the form
        shrub.execute(bob);          // Execute the form

    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
