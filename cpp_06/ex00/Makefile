# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 15:18:19 by otaraki           #+#    #+#              #
#    Updated: 2024/03/08 22:22:51 by otaraki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Program

HEADER = ScalarConverter.hpp

SRC = main.cpp ScalarConverter.cpp 

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
