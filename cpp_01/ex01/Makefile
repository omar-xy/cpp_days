# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 18:56:12 by otaraki           #+#    #+#              #
#    Updated: 2023/11/09 18:12:26 by otaraki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

HEADER = Zombie.hpp

SRC = main.cpp  ZombieHorde.cpp Zombie.cpp

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