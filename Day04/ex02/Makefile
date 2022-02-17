 
NAME = polymorphism 

SRCS = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
 
HEADERS = AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp
 
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

