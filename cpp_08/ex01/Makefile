CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Program

HEADER = Span.hpp

SRC = main.cpp  Span.cpp

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