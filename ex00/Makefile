CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(SRC)
	$(CPP) $(SRC) -o $(NAME)

%.o : %.cpp

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all