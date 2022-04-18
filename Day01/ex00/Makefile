# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 21:23:17 by hnaji-el          #+#    #+#              #
#    Updated: 2021/12/12 23:19:58 by hnaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HEADERS = Zombie.hpp

COMPILER = c++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

