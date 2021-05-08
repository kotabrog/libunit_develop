/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:07:13 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 21:07:19 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void  free_list(t_unit_test *list)
{
  t_unit_test *tmp;

  while (list)
  {
    tmp = list->next;
    free(list);
    list = tmp;
  }
}