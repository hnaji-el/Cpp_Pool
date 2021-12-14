# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 09:46:08 by hnaji-el          #+#    #+#              #
#    Updated: 2021/12/13 12:23:46 by hnaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

HEADERS = Zombie.hpp

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
