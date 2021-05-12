CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar r
OBJS		= $(SRCS:%.c=%.o)
NAME		= libft_sp.a
SRCS		= ft_isnum.c ft_prime_count.c ft_strcpy.c ft_strlen.c

all:	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re