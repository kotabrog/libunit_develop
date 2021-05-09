/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_big_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:15:27 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int	strlen_big_test(void)
{
	char	str[1001];
	int		i;

	i = 0;
	while (i < 1001)
	{
		str[i] = 'a';
		i++;
	}
	str[i] = '\0';
	if (strlen(str) == ft_strlen(str))
		return (0);
	else
		return (-1);
}
