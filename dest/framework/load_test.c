/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:04:34 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 18:07:52 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test **list, char *pstr, int (*fp)(void))
{
	t_unit_test	*new_list;
	t_unit_test	*tmp;

	new_list = malloc(sizeof(t_unit_test));
	if (new_list == NULL)
		return ;
	new_list->func_name = pstr;
	new_list->func = fp;
	new_list->next = NULL;
	if (*list == NULL)
		*list = new_list;
	else
	{
		tmp = *list;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_list;
	}
}
