NAME := libunit.a

CC := gcc

CFLAGS := -Wall -Werror -Wextra

SRCS := data_init.c print_result.c put_start.c load_test.c

OBJS := $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all
