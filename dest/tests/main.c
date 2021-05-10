/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:44:22 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:56:54 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	t_result	result;

	put_start("unit-test");
	data_init(&result);
	strlen_launcher(&result);
	isnum_launcher(&result);
	strcpy_launcher(&result);
	prime_count_launcher(&result);
	print_result("All", result.success_num, result.total_num);
	if (result.success_num == result.total_num)
		return (0);
	else
		return (-1);
}
