/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strncmp_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:58:56 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:16:49 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	strncmp_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("STRNCMP:\n");
	load_test(&testlist, "Normal test", &strncmp_normal_test);
	load_test(&testlist, "Normal(Plus case) test", &strncmp_plus_test);
	load_test(&testlist, "Normal(Minus case) test", &strncmp_minus_test);
	load_test(&testlist, "Zero string test", &strncmp_zerostr_test);
	return (launch_tests(testlist, result, "STRNCMP"));
}
