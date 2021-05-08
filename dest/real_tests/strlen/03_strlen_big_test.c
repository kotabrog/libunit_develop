/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_normal_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 21:34:34 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int strlen_big_test(void)
{
  char str[1001];
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    str[i] = 'a';
    i++;
  }
  if (strlen(str) == ft_strlen(str))
  {
    free(str);
    return (0);
  }
  else
  {
    free(str);
    return (-1);
  }
}