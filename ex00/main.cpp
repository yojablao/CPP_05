#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat king("simo",1);
        Bureaucrat civil("mowatin",1);
        std::cout<<king <<  std::endl;
        for(int i = 0;i < 150;i++)
        {
            std::cout<<civil << std::endl;
            civil.decrement();
        }
        king.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}