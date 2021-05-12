/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:00:55 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 20:55:41 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (!s2[i]);
}

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	s_len;
	size_t	find_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (find == NULL)
		return ((char *)s);
	s_len = ft_strlen(s);
	find_len = ft_strlen(find);
	i = 0;
	while (i + find_len <= len && i + find_len <= s_len)
	{
		if (ft_strcmp(s + i, find))
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
