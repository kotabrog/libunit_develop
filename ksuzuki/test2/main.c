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

int main()
{
	int	status;

	// status = execute_func(ft_len_test_simple);
	// status = execute_func(ft_len_test_simple_ko);
	status = execute_func(ft_len_test_simple_seg);
	printf("status: %d\n", status);
}