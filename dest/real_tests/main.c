/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:44:22 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 19:36:33 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "real_tests.h"

int	main(void)
{
	t_result	result;
	// スタートの合図の出力
	put_start("libft");

	// 初期化
	data_init(&result);

	// ランチャーの実行
	strlen_launcher(&result);
	strncmp_launcher(&result);
	strdup_launcher(&result);
	// launcher(result);
	// launcher(result);
	// launcher(result);

	print_result("All", result.success_num, result.total_num);
	return (0);
}
