# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 15:10:56 by mhabib-a          #+#    #+#              #
#    Updated: 2023/10/28 15:14:08 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
LIB = Fixed.hpp

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