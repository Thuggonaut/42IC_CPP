NAME		= replace
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
RM			= rm -rf
SRC 		= Replace.cpp main.cpp

all: 			$(NAME)

$(NAME): 		$(SRC)
				@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
				@$(RM) $(NAME)
				@find . -name "*.replace" -type f -exec $(RM) {} +

re: 			clean all

test: re
	@echo  "\033[1;33m \nRunning a test for file:\033[1;32m testfile.txt\033[1;33m ...\033[0m"
	@./$(NAME) testfile.txt them the
	@echo  "\033[1;33m \nAll occurences of\033[1;32m them\033[1;33m should be replaced with\033[1;32m the\033[1;33m ...\033[0m"
	@echo  "\033[1;33m \nTesting complete...\033[0m"
	@echo  "\033[1;33m \nTest successful if the file\033[1;36m testfile.txt.replace\033[1;33m is found with the updated changes\033[0m"

	@echo  "\033[1;33m \nTesting with empty parameter\033[1;32m testfile.txt\033[1;33m ...\033[0m"
	@./$(NAME) || echo "\033[1;31mExpected error: Program exited as intended when run without arguments\033[0m"

.PHONY: 		all clean re test