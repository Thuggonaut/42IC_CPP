NAME		= claptrap
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra
RM			= rm -rf
INC			= inc/
SRC_DIR		= src/
OBJ_DIR		= obj/
SRC 		= ScavTrap.cpp ClapTrap.cpp main.cpp

SRCS		=	$(addprefix $(SRC_DIR), $(SRC))
OBJ 		= 	$(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(SRCS))

all: 			$(NAME)

$(NAME): 		$(OBJ)
				@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp 
				@mkdir -p $(@D)
				@$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
				@$(RM) $(NAME) $(OBJ_DIR)

re: 			clean all

.PHONY: 		all clean re