NAME		= harl
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
RM			= rm -rf
SRC 		= Harl.cpp main.cpp

all: 			$(NAME)

$(NAME): 		$(SRC)
				$(CXX) $(CXXFLAGS) $^ -o $@

clean:
				@$(RM) $(NAME)

re: 			clean all

test: re
	@echo  "\033[1;33m \nRunning test cases for\033[1;32m Harl\033[1;33m ...\033[0m"
	@echo "\033[1;33m\nDEBUG:\033[0m"
	@./$(NAME) DEBUG
	@echo "\033[1;33m\nINFO:\033[0m"
	@./$(NAME) INFO
	@echo "\033[1;33m\nWARNING:\033[0m"
	@./$(NAME) WARNING
	@echo "\033[1;33m\nERROR:\033[0m"
	@./$(NAME) ERROR
	@echo  "\033[1;33m \nTesting complete...\033[0m"

.PHONY: 		all clean re test