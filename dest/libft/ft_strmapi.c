/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:10:39 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/10 21:03:30 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;
	unsigned int	n;

	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	p = (char *)malloc(n + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (f == NULL)
			p[i] = s[i];
		else
			p[i] = (*f)(i, s[i]);
		i++;
	}
	p[n] = 0;
	return (p);
}
