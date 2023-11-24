# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 09:59:07 by ml                #+#    #+#              #
#    Updated: 2023/11/24 09:23:14 by mvautrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	= "\033[1;32m"

NC = "\033[m"

NAME = Span

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

SRC = main.cpp\
	  Span.cpp\

INCLUDE = Span.hpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo $(GREEN)"\n cpp 08: ex01 [COMPILATION OK]\n"$(NC)

.cpp.o :
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)
	@echo $(GREEN)"\n cpp 08: ex01  [CLEAN OK]\n" $(NC)

re : fclean all

.PHONY : all clean fclean re
