
NAME = main

RM = rm -f

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

SRC =	main.cpp\

OBJS = $(SRC:.cpp=.o)

#.cpp.o: $(SRC)
.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all re clean fclean
