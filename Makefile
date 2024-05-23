NAME = minitalk

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = client.c \
		server.c \

OBJ = $(SRC:.c=.o)

all:	$(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -Ilibft -c $? -o $@

$(NAME):	server client

server:		server.o
	@make -C libft
	$(CC) $(CFLAGS) $? -Llibft -lft -o server

client:		client.o
	@make -C libft
	$(CC) $(CFLAGS) $? -Llibft -lft -o client

libft:
	make -C libft

clean:
	make clean -C libft
	@$(RM) $(OBJ)

fclean:		clean
	@$(RM) server client

re:		fclean all

.PHONY:		all clean fclean re libft