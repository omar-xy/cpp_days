# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 11:05:57 by otaraki           #+#    #+#              #
#    Updated: 2023/11/22 20:17:31 by otaraki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap

HEADER = FragTrap.hpp ClapTrap.hpp

SRC = main.cpp FragTrap.cpp ClapTrap.cpp

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