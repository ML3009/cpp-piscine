# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 09:59:07 by ml                #+#    #+#              #
#    Updated: 2023/09/04 16:38:46 by mvautrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	= "\033[1;32m"

NC = "\033[m"

NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = PhoneBook.cpp\
	  Contact.cpp\
	  main.cpp\

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo $(GREEN)"\n CPP 00 - [COMPILATION OK]\n"$(NC)

.c.o :
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(NAME)

fclean : clean
	@rm -f $(NAME)
	@echo $(GREEN)"\n CPP 00 - [CLEAN OK]\n" $(NC)

re : fclean all

.PHONY : all clean fclean re
