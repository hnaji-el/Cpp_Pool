# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 11:37:26 by hnaji-el          #+#    #+#              #
#    Updated: 2021/12/12 15:20:16 by hnaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phoneBook.cpp ClassPhonebook.cpp ClassContact.cpp

HEADERS = ClassPhonebook.hpp ClassContact.hpp

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
