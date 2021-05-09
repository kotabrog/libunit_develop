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

  testlist = NULL;
  printf("STRLEN:\n");
  load_test(&testlist, "Normal test", &strlen_normal_test);
  load_test(&testlist, "Zero test", &strlen_zero_test);
  load_test(&testlist, "Bigger string test", &strlen_big_test);
  return(launch_tests(testlist, result, "STRLEN"));
}
