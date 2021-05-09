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

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../tests.h"

int	strlen_plus_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("STRLEN_PLUS:\n");
	load_test(&testlist, "ng test", strlen_test_ng);
	return (launch_tests(testlist, result, "STRLEN_PLUS"));
}
