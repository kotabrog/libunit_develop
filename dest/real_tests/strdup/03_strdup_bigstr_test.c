/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strdup_bigstr_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:55:25 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	strdup_bigstr_test(void)
{
	char	str[1001];
	char	*str1;
	char	*str2;
	int		result;
	int		i;

	i = 0;
	while (i < 1001)
	{
		str[i] = 'a';
		i++;
	}
	str[i] = '\0';
	str1 = strdup(str);
	str2 = ft_strdup(str);
	result = strcmp(str1, str2);
	free(str1);
	free(str2);
	if (result == 0)
		return (0);
	else
		return (-1);
}
