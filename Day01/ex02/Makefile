# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 12:13:02 by hnaji-el          #+#    #+#              #
#    Updated: 2021/12/13 12:25:54 by hnaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ref

SRCS = main.cpp

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

