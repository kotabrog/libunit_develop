/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_plus_ng.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:54:24 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 00:21:04 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../tests.h"

int	strlen_test_ng(void)
{
	if (strlen("test") + 1 == ft_strlen("test"))
		return (0);
	else
		return (-1);
}
