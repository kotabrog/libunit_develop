NAME := tests

CC := gcc

CFLAGS := -Wall -Werror -Wextra

STRLENDIR := ./strlen
STRLENSRC := $(STRLENDIR)/00_strlen_launcher.c $(STRLENDIR)/01_strlen_ok.c $(STRLENDIR)/02_strlen_segv.c

ISNUMDIR := ./isnum
ISNUMSRC := $(ISNUMDIR)/00_isnum_launcher.c $(ISNUMDIR)/01_isnum_ng.c

STRCPYDIR := ./strcpy
STRCPYSRC := $(STRCPYDIR)/00_strcpy_launcher.c $(STRCPYDIR)/01_strcpy_bus.c $(STRCPYDIR)/02_strcpy_abt.c

PRIME_COUNTDIR := ./prime_count
PRIME_COUNTSRC := $(PRIME_COUNTDIR)/00_prime_count_launcher.c $(PRIME_COUNTDIR)/01_prime_count_tle.c

SRCS := main.c $(STRLENSRC) $(ISNUMSRC) $(STRCPYSRC) $(PRIME_COUNTSRC)

OBJS := $(SRCS:%.c=%.o)

TESTDIR := ../libft_sp

REPORT := test_report.txt

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ../framework
	$(MAKE) -C $(TESTDIR)
	$(CC) $(OBJS) -L../framework/ -lunit -L../libft_sp -lft_sp -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

test: all
	./$(NAME) 

report: all
	-@./$(NAME) > $(REPORT)

clean:
	$(MAKE) clean -C ../framework
	$(MAKE) clean -C $(TESTDIR)
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	$(MAKE) fclean -C ../framework
	$(MAKE) fclean -C $(TESTDIR)
	rm -f  $(NAME) $(REPORT)

re: fclean all

.PHONY: all clean fclean re test
