#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(std::string tar):AForm("shrubbery",145,137,tar){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
void ShrubberyCreationForm::execute(Bureaucrat const &bureau) const
{
    if(!getsign())
        throw Notsinged();
    if(bureau.getGrade() > 137)
        throw GradeTooLowException();
    std::ofstream file((getTarget() + "_shrubbery").c_str());
    if(!file)
    {std::cout<<"file can not opened"<< std::endl;
        return;
    }
    
file << "                            .s.s.\n";
file << "                         , `'`Y8bso.\n";
file << "                       ,d88bso y'd8l\n";
file << "                       \"`,8K j8P?*?b.\n";
file << "                      ,bonsai_`o.o\n";
file << "                 ,r.osbJ--','  e8b?Y..\n";
file << "                j*Y888P*{ `._.-'\" 888b\n";
file << "                  `'\"'`,.`'-. \"*?*P\"\n";
file << "                   db8sld-'., ,):5ls.\n";
file << "              <sd88P,-d888P'd888d8888Rdbc\n";
file << "              `\"*J*CJ8*d8888l:'  ``88?bl.o\n";
file << "              .o.sl.rsdP^*8bdbs.. *\"?**l888s.\n";
file << "            ,`JYsd88P88ls?\\**\"`*`-. `  ` `\"`\n";
file << "           dPJ88*J?P;Pd888D;=-.  -.l.s.\n";
file << "         .'`\"*Y,.sbsdkC l.    ?(     ^.\n";
file << "              .Y8*?8P*\"`       `)` .' :\n";
file << "                `\"`         _.-'. ,   k.\n";
file << "                           (    : '  ('\n";
file << "                  _______ ,'`-  )`.` `.l  ___\n";
file << "              r========-==-==-=-=-=------------=7\n";
file << "              `Y - --  ---- -- -   .          ,'\n";
file << "                :                        '   :\n";
file << "                 \\-..  .. .. . . . . .     ,/\n";
file << "              .-<=:`._____________________,'.:>-.\n";
file << "              L______                        ___J\n";
file << "                     ````````````````````````\n";

    file << std::endl;

    file.close();

}