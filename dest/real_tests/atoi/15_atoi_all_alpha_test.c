/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_atoi_all_alpha_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:49:05 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	atoi_all_alpha_test(void)
{
	if (atoi("abc") == ft_atoi("abc"))
		return (0);
	else
		return (-1);
}