# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:31:59 by hnaji-el          #+#    #+#              #
#    Updated: 2022/01/04 16:49:35 by hnaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
 
SRCS = main.cpp Fixed.cpp
 
HEADERS = Fixed.hpp
 
COMPILER = clang++
 
FLAGS = -Wall -Wextra -Werror
 
all: $(NAME)
 
$(NAME): $(SRCS) $(HEADERS)
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)
 
clean:
	rm -rf $(NAME)
 
fclean: clean
 
re: fclean all
 
.PHONY: all clean fclean re

