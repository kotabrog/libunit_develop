/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_atoi_alpha_end_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:48:16 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	atoi_alpha_end_test(void)
{
	if (atoi("123a") == ft_atoi("123a"))
		return (0);
	else
		return (-1);
}
