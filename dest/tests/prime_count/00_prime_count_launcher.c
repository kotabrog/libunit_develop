/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_plus_launcher.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 00:22:12 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 00:22:12 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	prime_count_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("PRIME_COUNT:\n");
	load_test(&testlist, "tle test", prime_count_test_tle);
	return (launch_tests(testlist, result, "PRIME_COUNT"));
}
