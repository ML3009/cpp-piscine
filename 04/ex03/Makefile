# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 09:59:07 by ml                #+#    #+#              #
#    Updated: 2023/11/06 14:15:34 by mvautrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	= "\033[1;32m"

NC = "\033[m"

NAME = Materia

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

INCLUDE_DIR = include

SRC = src/main.cpp\
	  src/AMateria.cpp\
	  src/Character.cpp\
	  src/MateriaSource.cpp\
	  src/Cure.cpp\
	  src/Ice.cpp\


OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo $(GREEN)"\n cpp 04: ex03 [COMPILATION OK]\n"$(NC)

.cpp.o :
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)
	@echo $(GREEN)"\n cpp 04: ex03  [CLEAN OK]\n" $(NC)

re : fclean all

.PHONY : all clean fclean re
