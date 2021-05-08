/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:58:56 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 22:58:57 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../real_tests.h"

int strlen_launcher(t_result *result)
{
  t_unit_test *testlist;

  printf("STRLEN:\n");
  testlist = NULL;
  load_test(testlist, "Normal test", &strlen_normal_test);
  // load_test(testlist, "NULL test", &null_test);
  // load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */

  // 実行する
  return(launch_tests(testlist, result, "STRLEN"));
}
