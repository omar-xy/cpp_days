CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

HEADER = RPN.hpp

SRC = main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CPP) $(CPPFLAGS) -c $< 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all