/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:43:20 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/09 22:40:30 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/wait.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define SUCCESS 0
# define ERROR 1
# define KO 255
# define ALARM_TIME 5

typedef struct s_unit_test
{
	char				*func_name;
	int					(*func)(void);
	struct s_unit_test	*next;
}				t_unit_test;

typedef struct s_result
{
	int			success_num;
	int			total_num;
}				t_result;

int				execute_func(int (*func)(void));
int				launch_tests(t_unit_test *list, t_result *result, \
				char *test_func_name);
void			put_start(char *str);
void			data_init(t_result *result);
void			print_result(char *str, int success_num, int total_num);
void			load_test(t_unit_test **list, char *pstr, int (*fp)(void));
int				ut_ft_strlen(char *str);
void			ut_ft_putstr(char *str);
int				ut_array_convert(int n, char *array);
char			*ut_ft_itoa(int n);

#endif
