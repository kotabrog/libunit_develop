/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_atoi_basic06_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:06:48 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	atoi_basic06_test(void)
{
	if (atoi("1") == ft_atoi("1"))
		return (0);
	else
		return (-1);
}
