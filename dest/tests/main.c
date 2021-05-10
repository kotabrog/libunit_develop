/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:44:22 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 20:56:54 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "tests.h"

int	main(void)
{
	t_result	result;
	// スタートの合図の出力
	put_start("unit-test");

	// 初期化
	data_init(&result);

	// ランチャーの実行
	strlen_launcher(&result);
	strlen_plus_launcher(&result);
	strlcpy_launcher(&result);

	print_result("All", result.success_num, result.total_num);
	if (result.success_num == result.total_num)
		return (0);
	else
		return (-1);
}
