NAME := real_tests

CC := gcc

CFLAGS := -Wall -Werror -Wextra

STRLENDIR := ./strlen

# SRCS := main.c $(STRLENDIR)/00_strlen_launcher.c $(STRLENDIR)/01_strlen_normal_test.c 
SRCS := main.c  

OBJS := $(SRCS:%.c=%.o)

TESTDIR := ../libft

REPORT := test_report.txt

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ../framework
	$(MAKE) -C $(TESTDIR)
	# $(CC) $(OBJS) -L../framework/ -lunit -o $(NAME)
	$(CC) $(OBJS) -L../framework/ -lunit -L../libft -lft -o $(NAME)


%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

test: fclean all
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