/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:16:44 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/08 17:23:24 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <string.h>

int ft_len_test_simple(void)
{
  if (strlen("abcde") == strlen("abcde"))
      return (0);
  else
      return (-1);
}

int ft_len_test_simple_ko(void)
{
  if (strlen("abcde") == strlen("abcd"))
      return (0);
  else
      return (-1);
}

int ft_len_test_simple_seg(void)
{
  if (strlen("abcde") == strlen(NULL))
      return (0);
  else
      return (-1);
}

int ft_strcpy_test_simple_bus(void)
{
	if (strcpy("abc", "cde"))
		return (0);
	else
		return (-1);
}

int ft_strcpy_test_simple_abort(void)
{
	char *s;

	s = "test";
	if (strcpy(s, s))
		return (0);
	else
		return (-1);
}

int is_prime(int num)
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

int count_prime(int num)
{
	int	i;
	int	ans;

	i = 2;
	ans = 0;
	if (num < 2)
		return (0);
	while (i <= num)
	{
		if (is_prime(i))
			++ans;
		++i;
	}
	return (ans);
}

int ft_prime_test_timeout(void)
{
	if (count_prime(100000000) == 5761455)
		return (0);
	else
		return (1);
}

int main()
{
	int	status;

	// status = execute_func(ft_len_test_simple);
	// status = execute_func(ft_len_test_simple_ko);
	// status = execute_func(ft_len_test_simple_seg);
	// status = execute_func(ft_strcpy_test_simple_bus);
	// status = execute_func(ft_strcpy_test_simple_abort);
	status = execute_func(ft_prime_test_timeout);
	printf("status: %d\n", status);
}
