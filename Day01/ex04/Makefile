# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 02:18:52 by hnaji-el          #+#    #+#              #
#    Updated: 2021/12/14 02:21:09 by hnaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main.cpp errorHandling.cpp

HEADERS = errorHandling.hpp

COMPILER = c++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

