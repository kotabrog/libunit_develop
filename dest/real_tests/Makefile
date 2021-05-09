NAME := real_tests

CC := gcc

CFLAGS := -Wall -Werror -Wextra

STRLENDIR := ./strlen
STRLENSRC := $(STRLENDIR)/00_strlen_launcher.c $(STRLENDIR)/01_strlen_normal_test.c $(STRLENDIR)/02_strlen_zero_test.c $(STRLENDIR)/03_strlen_big_test.c

STRNCMPDIR := ./strncmp
STRNCMPSRC := $(STRNCMPDIR)/00_strncmp_launcher.c $(STRNCMPDIR)/01_strncmp_normal_test.c $(STRNCMPDIR)/02_strncmp_plus_test.c $(STRNCMPDIR)/03_strncmp_minus_test.c $(STRNCMPDIR)/04_strncmp_zerostr_test.c 

STRDUPDIR := ./strdup
STRDUPSRC := $(STRDUPDIR)/00_strdup_launcher.c $(STRDUPDIR)/01_strdup_normal_test.c $(STRDUPDIR)/02_strdup_zerostr_test.c $(STRDUPDIR)/03_strdup_bigstr_test.c

SRCS := main.c $(STRLENSRC) $(STRNCMPSRC) $(STRDUPSRC)

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

test: fclean all
	./$(NAME) 
# ./$(NAME) > $(REPORT)
# cat $(REPORT)

clean:
	$(MAKE) clean -C ../framework
	$(MAKE) clean -C $(TESTDIR)
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	$(MAKE) fclean -C ../framework
	$(MAKE) fclean -C $(TESTDIR)
	rm -f  $(NAME) $(REPORT)

re: fclean all