/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlcpy_bus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 00:22:31 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 00:22:33 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../tests.h"

int	strlcpy_test_bus(void)
{
	if (ft_strlcpy("test", "src", 3) == 3)
		return (0);
	else
		return (-1);
}
