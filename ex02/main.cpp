#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 50);
        Bureaucrat bob("Bob", 100); 
        Form taxForm("TaxForm", 100, 50); 

        std::cout << "Initial State:" << std::endl;
        std::cout << alice << std::endl;
        std::cout << bob << std::endl;
        std::cout << taxForm << std::endl;

        std::cout << "\n--- Attempting to sign the form ---" << std::endl;

        bob.signForm(taxForm); 
        std::cout << taxForm << std::endl;

        std::cout << std::endl;
        alice.signForm(taxForm);
        std::cout << taxForm << std::endl;

    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
