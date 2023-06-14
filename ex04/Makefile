
NAME = replace

RM = rm -f

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

SRC =	main.cpp\

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all re clean fclean
