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

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../tests.h"

int	strlcpy_launcher(t_result *result)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_ft_putstr("STRLCPY:\n");
	load_test(&testlist, "bus test", strlcpy_test_bus);
	return (launch_tests(testlist, result, "STRLCPY"));
}
