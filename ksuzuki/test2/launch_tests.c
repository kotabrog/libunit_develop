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
		printf("OK");
	else if (status == KO)
		printf("KO");
	else if (status == SIGSEGV)
		printf("SEGV");
	else if (status == SIGBUS)
		printf("BUSE");
	else
		printf("UNEXPECTED ERROR");
}

static void	put_one_result(char *func_name, int status)
{
	printf("    > %s : [", func_name);
	put_status(status);
	printf("]\n");
}

static int	result_update(t_result *result, int status)
{
	if (status == SUCCESS)
		++(result->success_num);
	++(result->total_num);
	return (SUCCESS);
}

int	launch_tests(t_unit_test *list, t_result *result)
{
	int	status;

	while (list)
	{
		status = execute_func(list->func);
		put_one_result(list->func_name, status);
		result_update(result, status);
		list = list->next;
	}
	printf("\n");
	return (SUCCESS);
}