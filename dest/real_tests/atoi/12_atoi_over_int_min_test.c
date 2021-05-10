/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_atoi_over_int_min_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:30:17 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	atoi_over_int_min_test(void)
{
	if (atoi("-2147483649") == ft_atoi("-2147483649"))
		return (0);
	else
		return (-1);
}
