/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:58:56 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:16:23 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strlen_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("STRLEN:\n");
	load_test(&testlist, "ok test", strlen_test_ok);
	load_test(&testlist, "segv test", strlen_test_segv);
	return (launch_tests(testlist, result, "STRLEN"));
}
