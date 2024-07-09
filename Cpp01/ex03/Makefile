NAME		= violence
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
SRC 		= Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp \
				main.cpp
RM			=	rm -rf

all: 		$(NAME)

$(NAME): 	$(SRC)
			$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			$(RM) $(NAME)

re: 		clean all

.PHONY: 	all clean re leaks valgrind_leaks

leaks: re
	@echo "\033[1;33m\nChecking for memory leaks...\033[0m"
	leaks --atExit -- ./$(NAME)

valgrind_leaks: re
	@echo "\033[1;33m\nChecking for memory leaks with valgrind...\033[0m"
	valgrind --leak-check=full ./$(NAME)