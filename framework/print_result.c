/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:23:52 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 19:35:40 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ut_array_convert(int n, char *array)
{
	int		len;
	char	minus;

	len = 0;
	if (n <= 0)
	{
		array[len] = n % 10 * (-1) + '0';
		if (n < 0)
			minus = '-';
		n = n / 10 * (-1);
		len++;
	}
	while (n != 0)
	{
		array[len] = n % 10 + '0';
		n = n / 10;
		len++;
	}
	if (minus == '-')
	{
		array[len] = '-';
		len++;
	}
	return (len);
}

char	*ut_ft_itoa(int n)
{
	char	*str;
	int		len;
	char	array[30];
	int		i;

	len = ut_array_convert(n, array);
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (NULL);
	i = 0;
	len--;
	while (len >= 0)
	{
		str[i] = array[len];
		len--;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	print_result(char *str, int success_num, int total_num)
{
	char	*num1;
	char	*num2;

	num1 = ut_ft_itoa(success_num);
	num2 = ut_ft_itoa(total_num);
	if (num1 == NULL || num2 == NULL)
		return ;
	ut_ft_putstr("------------------------\n");
	ut_ft_putstr(num1);
	ut_ft_putstr("/");
	ut_ft_putstr(num2);
	ut_ft_putstr(" ");
	ut_ft_putstr(str);
	ut_ft_putstr(" tests checked.\n");
	ut_ft_putstr("------------------------\n");
	free(num1);
	free(num2);
}
