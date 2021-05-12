/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strdup_normal_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:19:44 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	strdup_normal_test(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = strdup("test");
	str2 = ft_strdup("test");
	result = strcmp(str1, str2);
	free(str1);
	free(str2);
	if (result == 0)
		return (0);
	else
		return (-1);
}
