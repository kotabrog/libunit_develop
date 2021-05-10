/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcpy_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 00:22:42 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 00:22:42 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strcpy_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("STRCPY:\n");
	load_test(&testlist, "bus test", strcpy_test_bus);
	load_test(&testlist, "abort test", strcpy_test_abt);
	return (launch_tests(testlist, result, "STRCPY"));
}
