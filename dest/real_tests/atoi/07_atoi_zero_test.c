/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_zero_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:19:48 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	atoi_zero_test(void)
{
	if (atoi("0") == ft_atoi("0"))
		return (0);
	else
		return (-1);
}
