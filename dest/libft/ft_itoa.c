/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:09:47 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 20:53:03 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_set_num(char *p, int n, int digits)
{
	while (n != 0)
	{
		p[digits--] = n % 10 + '0';
		n /= 10;
	}
	return ;
}

static int	ft_num_digits(int n)
{
	int	i;

	if (n == -2147483648)
		return (10);
	if (n < 0)
		n *= -1;
	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		num_digits;
	char	*p;

	num_digits = ft_num_digits(n);
	if (n <= 0)
		num_digits++;
	p = (char *)malloc(num_digits + 1);
	if (p == NULL)
		return (NULL);
	p[num_digits--] = 0;
	if (n == -2147483648)
	{
		p[num_digits--] = '8';
		n = -214748364;
	}
	if (n < 0)
	{
		n *= -1;
		p[0] = '-';
	}
	if (n == 0)
		p[0] = '0';
	else
		ft_set_num(p, n, num_digits);
	return (p);
}
