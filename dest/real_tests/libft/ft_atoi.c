/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:24:50 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 21:04:05 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace_sub(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' \
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long long	n;
	int			minus_flag;

	n = 0;
	minus_flag = 0;
	while (ft_isspace_sub(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		minus_flag = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
		n = n * 10 + (*nptr++ - '0');
	if (minus_flag)
		n *= -1;
	return ((int)n);
}
