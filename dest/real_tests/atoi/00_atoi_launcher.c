/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:58:56 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:48:44 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	atoi_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("ATOI:\n");
	load_test(&testlist, "Basic01 test", &atoi_basic01_test);
	load_test(&testlist, "Basic02 test", &atoi_basic02_test);
	load_test(&testlist, "Basic03 test", &atoi_basic03_test);
	load_test(&testlist, "Basic04 test", &atoi_basic04_test);
	load_test(&testlist, "Basic05 test", &atoi_basic05_test);
	load_test(&testlist, "Basic06 test", &atoi_basic06_test);
	load_test(&testlist, "Zero test", &atoi_zero_test);
	load_test(&testlist, "Brank test", &atoi_brank_test);
	load_test(&testlist, "INT_MAX test", &atoi_int_max_test);
	load_test(&testlist, "INT_MIN test", &atoi_int_min_test);
	load_test(&testlist, "Over INT_MAX test", &atoi_over_int_max_test);
	load_test(&testlist, "Over INT_MIN test", &atoi_over_int_min_test);
	load_test(&testlist, "Space start test", &atoi_space_start_test);
	load_test(&testlist, "Alphabet start test", &atoi_alpha_start_test);
	load_test(&testlist, "All alphabet test", &atoi_all_alpha_test);
	load_test(&testlist, "Alphabet end test", &atoi_alpha_end_test);
	return (launch_tests(testlist, result, "ATOI"));
}
