/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strdup_bigstr_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 10:00:24 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int strdup_bigstr_test(void)
{
  char str[1001];
  char *str1;
  char *str2;
  int result;
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    str[i] = 'a';
    i++;
  }
  str1 = strdup(str);
  str2 = ft_strdup(str);
  result = strcmp(str1, str2);
  free(str1);
  free(str2);
  if (result == 0)
    return (0);
  else
    return (-1);
}
