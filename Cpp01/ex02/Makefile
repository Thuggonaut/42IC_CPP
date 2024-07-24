NAME		= brain
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
SRC 		= main.cpp
RM			= rm -rf

all: 		$(NAME)

$(NAME): 	$(SRC)
			@$(CXX) $(CXXFLAGS) $< -o $@

clean:
			$(RM) $(NAME)

re: 		clean all

.PHONY: 	all clean re 

