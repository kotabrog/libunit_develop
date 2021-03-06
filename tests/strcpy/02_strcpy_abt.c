/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcpy_abt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:13:03 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 22:16:36 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strcpy_test_abt(void)
{
	char	s[2];

	s[0] = 'a';
	s[1] = '\0';
	ft_strcpy(s, s);
	if (strcmp(s, s))
		return (0);
	else
		return (-1);
}
