NAME := real_tests

CC := gcc

CFLAGS := -Wall -Werror -Wextra

STRLENDIR := ./strlen
STRLENSRC := $(STRLENDIR)/00_strlen_launcher.c $(STRLENDIR)/01_strlen_normal_test.c $(STRLENDIR)/02_strlen_zero_test.c $(STRLENDIR)/03_strlen_big_test.c

STRNCMPDIR := ./strncmp
STRNCMPSRC := $(STRNCMPDIR)/00_strncmp_launcher.c $(STRNCMPDIR)/01_strncmp_normal_test.c $(STRNCMPDIR)/02_strncmp_plus_test.c $(STRNCMPDIR)/03_strncmp_minus_test.c $(STRNCMPDIR)/04_strncmp_zerostr_test.c 

STRDUPDIR := ./strdup
STRDUPSRC := $(STRDUPDIR)/00_strdup_launcher.c $(STRDUPDIR)/01_strdup_normal_test.c $(STRDUPDIR)/02_strdup_zerostr_test.c $(STRDUPDIR)/03_strdup_bigstr_test.c 

ATOIDIR := ./atoi
ATOISRC := $(ATOIDIR)/00_atoi_launcher.c $(ATOIDIR)/01_atoi_basic01_test.c $(ATOIDIR)/02_atoi_basic02_test.c $(ATOIDIR)/03_atoi_basic03_test.c $(ATOIDIR)/04_atoi_basic04_test.c $(ATOIDIR)/05_atoi_basic05_test.c $(ATOIDIR)/06_atoi_basic06_test.c $(ATOIDIR)/07_atoi_zero_test.c $(ATOIDIR)/08_atoi_brank_test.c $(ATOIDIR)/09_atoi_int_max_test.c $(ATOIDIR)/10_atoi_int_min_test.c $(ATOIDIR)/11_atoi_over_int_max_test.c $(ATOIDIR)/12_atoi_over_int_min_test.c $(ATOIDIR)/13_atoi_space_start_test.c $(ATOIDIR)/14_atoi_alpha_start_test.c $(ATOIDIR)/15_atoi_all_alpha_test.c $(ATOIDIR)/16_atoi_alpha_end_test.c

SRCS := main.c $(STRLENSRC) $(STRNCMPSRC) $(STRDUPSRC) $(ATOISRC)

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
	-@./$(NAME) > $(REPORT)
	-@cat $(REPORT)

clean:
	$(MAKE) clean -C ../framework
	$(MAKE) clean -C $(TESTDIR)
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	$(MAKE) fclean -C ../framework
	$(MAKE) fclean -C $(TESTDIR)
	rm -f  $(NAME) $(REPORT)

re: fclean all
