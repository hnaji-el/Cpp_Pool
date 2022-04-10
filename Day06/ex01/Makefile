 
NAME = serialization
 
SRCS = main.cpp serialization.cpp Data.cpp
 
HEADERS = serialization.hpp Data.hpp
 
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

