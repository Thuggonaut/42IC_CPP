NAME		= replace
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
RM			= rm -rf
SRC 		= Rename.cpp main.cpp

all: 			$(NAME)

$(NAME): 		$(SRC)
				$(CXX) $(CXXFLAGS) $^ -o $@

clean:
				@$(RM) $(NAME)

re: 			clean all

.PHONY: 		all clean re