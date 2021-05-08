/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:23:52 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 19:35:40 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_result(char *str, int success_num, int total_num)
{
	printf("------------------------\n");
	printf("%d/%d %s tests checked.\n", success_num, total_num, str);
	printf("------------------------\n");
}
