/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:23:02 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 19:23:10 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ut_ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ut_ft_putstr(char *str)
{
	write(1, str, ut_ft_strlen(str));
}

void	put_start(char *str)
{
	ut_ft_putstr("\n");
	ut_ft_putstr("*********************************\n");
	ut_ft_putstr("** 42 - Unit Tests (");
	ut_ft_putstr(str);
	ut_ft_putstr(")****\n");
	ut_ft_putstr("*********************************\n");
	ut_ft_putstr("\n");
}
