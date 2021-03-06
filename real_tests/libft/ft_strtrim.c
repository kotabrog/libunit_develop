/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 21:42:19 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 20:59:15 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	len;

	len = 0;
	if (s1 == NULL)
		return (NULL);
	if (set != NULL)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
	}
	len = ft_strlen(s1);
	if (set != NULL)
	{
		while (0 < len && ft_strchr(set, s1[len - 1]))
			len--;
	}
	p = ft_substr(s1, 0, len);
	if (p == NULL)
		return (NULL);
	return (p);
}
