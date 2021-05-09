/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:04:23 by hida              #+#    #+#             */
/*   Updated: 2021/05/08 23:04:26 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
#define REAL_TESTS_H

int strlen_launcher(t_result *result);
int strlen_normal_test(void);
int strlen_zero_test(void);
int strlen_big_test(void);

int strncmp_launcher(t_result *result);
int strncmp_normal_test(void);
int strncmp_plus_test(void);
int strncmp_minus_test(void);
int strncmp_zerostr_test(void);

int strdup_launcher(t_result *result);
int strdup_normal_test(void);
int strdup_zerostr_test(void);
int strdup_bigstr_test(void);

#endif