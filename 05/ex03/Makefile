# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 09:59:07 by ml                #+#    #+#              #
#    Updated: 2023/11/09 17:28:31 by mvautrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	= "\033[1;32m"

NC = "\033[m"

NAME = Bureaucrat

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

PATH_SRC = src/

SRC = $(PATH_SRC)main.cpp\
	  $(PATH_SRC)Bureaucrat.cpp\
	  $(PATH_SRC)AForm.cpp\
	  $(PATH_SRC)PresidentialPardonForm.cpp\
	  $(PATH_SRC)ShrubberyCreationForm.cpp\
	  $(PATH_SRC)RobotomyRequestForm.cpp\
	  $(PATH_SRC)Intern.cpp\

INCLUDE_DIR = include

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo $(GREEN)"\n cpp 05: ex03 [COMPILATION OK]\n"$(NC)

.cpp.o :
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR)  -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)
	@echo $(GREEN)"\n cpp 05: ex03  [CLEAN OK]\n" $(NC)

re : fclean all

.PHONY : all clean fclean re
