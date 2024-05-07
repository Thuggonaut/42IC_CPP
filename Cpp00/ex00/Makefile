NAME	= megaphone

CC		= g++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
TARGET	= megaphone

all:	$(NAME)

$(NAME): megaphone.cpp
		$(CC) $(CFLAGS) -o $(NAME) megaphone.cpp

clean:
		rm -f $(NAME)

test: 	$(NAME)
		./$(NAME) "shhhhh... I think the students are asleep..."
		./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
		./$(NAME)