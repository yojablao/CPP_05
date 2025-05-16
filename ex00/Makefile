NAME =  Bureaucrat

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Bureaucrat.cpp main.cpp
HEAD = Bureaucrat.hpp 
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