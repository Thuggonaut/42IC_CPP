NAME		= claptrap
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
RM			= rm -rf
SRC 		= ClapTrap.cpp main.cpp

all: 			$(NAME)

$(NAME): 		$(SRC)
				@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
				@$(RM) $(NAME)

re: 			clean all

.PHONY: 		all clean re