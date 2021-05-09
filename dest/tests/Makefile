NAME := tests

CC := gcc

CFLAGS := -Wall -Werror -Wextra

FUNCDIR :=
FUNCSRC := 

SRCS := main.c 

OBJS := $(SRCS:%.c=%.o)

TESTDIR := ../libft

REPORT := test_report.txt

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ../framework
	$(MAKE) -C $(TESTDIR)
	$(CC) $(OBJS) -L../framework/ -lunit -L../libft -lft -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

test: all
	# ./$(NAME) 
	./$(NAME) > $(REPORT)
	cat $(REPORT)

clean:
	$(MAKE) clean -C ../framework
	$(MAKE) clean -C $(TESTDIR)
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	$(MAKE) fclean -C ../framework
	$(MAKE) fclean -C $(TESTDIR)
	rm -f  $(NAME) $(REPORT)

re: fclean all
