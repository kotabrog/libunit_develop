/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 21:01:36 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 21:02:18 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *p, char const *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	n1;
	size_t	n2;

	n1 = 0;
	n2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		n1 = ft_strlen(s1);
	if (s2 != NULL)
		n2 = ft_strlen(s2);
	p = (char *)malloc(n1 + n2 + 1);
	if (p == NULL)
		return (NULL);
	ft_strcpy(p, s1, n1);
	ft_strcpy(p + n1, s2, n2);
	p[n1 + n2] = 0;
	return (p);
}
