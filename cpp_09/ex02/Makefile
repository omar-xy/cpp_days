CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PmergeMe

HEADER = PmergeMe.hpp

SRC = main.cpp PmergeMe.cpp

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