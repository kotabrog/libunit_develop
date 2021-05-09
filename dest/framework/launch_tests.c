/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:42:58 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/08 21:16:49 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	put_status(int status)
{
	if (status == SUCCESS)
		ut_ft_putstr("\x1b[32mOK\x1b[39m");
	else if (status == KO)
		ut_ft_putstr("\x1b[31mKO\x1b[39m");
	else if (status == SIGSEGV)
		ut_ft_putstr("\x1b[31mSEGV\x1b[39m");
	else if (status == SIGBUS)
		ut_ft_putstr("\x1b[31mBUSE\x1b[39m");
	else
		ut_ft_putstr("\x1b[31mUNEXPECTED ERROR\x1b[39m");
}

static void	put_one_result(char *func_name, int status)
{
	ut_ft_putstr("    > ");
	ut_ft_putstr(func_name);
	ut_ft_putstr(" : [");
	put_status(status);
	ut_ft_putstr("]\n");
}

static int	result_update(t_result *result, int status)
{
	if (status == SUCCESS)
		++(result->success_num);
	++(result->total_num);
	return (SUCCESS);
}

static int	all_result_update(t_result *result, t_result *temp)
{
	result->success_num += temp->success_num;
	result->total_num += temp->total_num;
	return (SUCCESS);
}

int	launch_tests(t_unit_test *list, t_result *result, char *test_func_name)
{
	int			status;
	t_result	temp;

	data_init(&temp);
	while (list)
	{
		status = execute_func(list->func);
		put_one_result(list->func_name, status);
		result_update(&temp, status);
		list = list->next;
	}
	ut_ft_putstr("\n");
	print_result(test_func_name, temp.success_num, temp.total_num);
	all_result_update(result, &temp);
	return (SUCCESS);
}
