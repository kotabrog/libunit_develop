/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:10:42 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 21:24:29 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int num)
{
	int	i;

	i = 2;
	if (num < 2)
		return (0);
	if (num == 2)
		return (1);
	while (i < num)
	{
		if (num == num / i * i)
			break ;
		++i;
	}
	if (i == num)
		return (1);
	return (0);
}

int	ft_count_prime(int num)
{
	int	i;
	int	ans;

	i = 2;
	ans = 0;
	if (num < 2)
		return (0);
	while (i <= num)
	{
		if (ft_is_prime(i))
			++ans;
		++i;
	}
	return (ans);
}
