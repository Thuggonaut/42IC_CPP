NAME		= fixed
CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Werror -Wextra
RM			= rm -rf
SRC 		= Fixed.cpp main.cpp

all: 			$(NAME)

$(NAME): 		$(SRC)
				@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
				@$(RM) $(NAME)

re: 			clean all

.PHONY: 		all clean re