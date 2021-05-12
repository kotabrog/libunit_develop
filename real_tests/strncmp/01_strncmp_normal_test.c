/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strncmp_normal_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:17:31 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	strncmp_normal_test(void)
{
	char	*s1;
	char	*s2;

	s1 = "test";
	s2 = "test";
	if (strncmp(s1, s2, 4) == ft_strncmp(s1, s2, 4))
		return (0);
	else
		return (-1);
}
