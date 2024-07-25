NAME		= zombiez
CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Werror -Wextra
SRC 		= Zombie.cpp main.cpp
RM			=	rm -rf

all: 		$(NAME)

$(NAME): 	$(SRC)
			@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			$(RM) $(NAME)

re: 		clean all

.PHONY: 	all clean re
