# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 15:10:56 by mhabib-a          #+#    #+#              #
#    Updated: 2023/11/06 14:56:58 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Trap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FlagTrap.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CPPFLAGS = #-Wall -Wextra -Werror -std=c++98
RM = rm -f
LIB = ClapTrap.hpp ScavTrap.hpp FlagTrap.hpp

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

%.o : %.cpp $(LIB)
	$(CC) $(CPPFLAGS) -c $<

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all