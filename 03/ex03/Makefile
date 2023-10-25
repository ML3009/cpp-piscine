# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 09:59:07 by ml                #+#    #+#              #
#    Updated: 2023/10/19 16:42:08 by mvautrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	= "\033[1;32m"

NC = "\033[m"

NAME = FragTrap

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	  ClapTrap.cpp\
	  ScavTrap.cpp\
	  FragTrap.cpp\
	  DiamondTrap.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo $(GREEN)"\n cpp 03: ex03 [COMPILATION OK]\n"$(NC)

.cpp.o :
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)
	@echo $(GREEN)"\n cpp 03: ex03  [CLEAN OK]\n" $(NC)

re : fclean all

.PHONY : all clean fclean re
