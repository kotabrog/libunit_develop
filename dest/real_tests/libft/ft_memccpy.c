/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 22:45:52 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 20:54:22 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		*((char *)dest + i) = *((char *)src + i);
		if (*((unsigned char *)dest + i) == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
