NAME := tests

CC := gcc

CFLAGS := -Wall -Werror -Wextra

STRLENDIR := ./strlen
STRLENSRC := $(STRLENDIR)/00_strlen_launcher.c $(STRLENDIR)/01_strlen_ok.c $(STRLENDIR)/02_strlen_segv.c

STRLEN_PLUSDIR := ./strlen_plus
STRLEN_PLUSSRC := $(STRLEN_PLUSDIR)/00_strlen_plus_launcher.c $(STRLEN_PLUSDIR)/01_strlen_plus_ng.c

STRLCPYDIR := ./strlcpy
STRLCPYSRC := $(STRLCPYDIR)/00_strlcpy_launcher.c $(STRLCPYDIR)/01_strlcpy_bus.c

SRCS := main.c $(STRLENSRC) $(STRLEN_PLUSSRC) $(STRLCPYSRC)

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
