 
NAME = easyfind
 
SRCS = main.cpp
 
HEADERS = easyfind.hpp
 
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

