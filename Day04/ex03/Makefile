# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 15:10:56 by mhabib-a          #+#    #+#              #
#    Updated: 2023/12/11 11:25:01 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materias
SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp ICharacter.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -f
LIB = AMateria.hpp Ice.hpp Cure.hpp MateriaSource.hpp IMateriaSource.hpp Character.hpp ICharacter.hpp

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