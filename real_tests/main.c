/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:44:22 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:47:48 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "real_tests.h"

int	main(void)
{
	t_result	result;

	put_start("libft");
	data_init(&result);
	strlen_launcher(&result);
	strncmp_launcher(&result);
	strdup_launcher(&result);
	atoi_launcher(&result);
	print_result("All", result.success_num, result.total_num);
	if (result.success_num == result.total_num)
		return (0);
	else
		return (-1);
}
