NAME =  Form

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp
HEAD = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp
OBJ =$(SRC:.cpp=.o)

%.o: %.cpp $(HEAD)
	$(CC) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) :$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME) 


clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)

re: fclean all