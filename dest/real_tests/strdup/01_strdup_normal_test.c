/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strdup_normal_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:34:30 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 09:46:32 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int strdup_normal_test(void)
{
  char *str1;
  char *str2;
  int result;

  str1 = strdup("test");
  str2 = ft_strdup("test");
  result = strcmp(str1, str2);
  free(str1);
  free(str2);
  if (result == 0)
    return (0);
  else
    return (-1);
}
