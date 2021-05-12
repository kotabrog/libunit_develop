/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:58:56 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:19:13 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	strdup_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("STRDUP:\n");
	load_test(&testlist, "Normal test", &strdup_normal_test);
	load_test(&testlist, "Zero string test", &strdup_zerostr_test);
	load_test(&testlist, "Big string test", &strdup_bigstr_test);
	return (launch_tests(testlist, result, "STRDUP"));
}
