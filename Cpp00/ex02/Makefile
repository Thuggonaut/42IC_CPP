NAME		= bank_accounts
CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Werror -Wextra
SRC 		= Account.cpp tests.cpp
RM			=	rm -rf

all: 		$(NAME)

$(NAME): 	$(SRC)
			@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
			$(RM) $(NAME)

re: 		clean all

.PHONY: 	all clean re