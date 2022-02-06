 
NAME = diamondTrap
 
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
 
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
 
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

