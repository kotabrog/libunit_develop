/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:04:23 by hida              #+#    #+#             */
/*   Updated: 2021/05/10 20:46:46 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include <string.h>

int	strlen_launcher(t_result *result);
int	strlen_normal_test(void);
int	strlen_zero_test(void);
int	strlen_big_test(void);

int	strncmp_launcher(t_result *result);
int	strncmp_normal_test(void);
int	strncmp_plus_test(void);
int	strncmp_minus_test(void);
int	strncmp_zerostr_test(void);

int	strdup_launcher(t_result *result);
int	strdup_normal_test(void);
int	strdup_zerostr_test(void);
int	strdup_bigstr_test(void);

int	atoi_launcher(t_result *result);
int	atoi_basic01_test(void);
int	atoi_basic02_test(void);
int	atoi_basic03_test(void);
int	atoi_basic04_test(void);
int	atoi_basic05_test(void);
int	atoi_basic06_test(void);
int	atoi_zero_test(void);
int	atoi_brank_test(void);
int	atoi_int_max_test(void);
int	atoi_int_min_test(void);
int	atoi_over_int_max_test(void);
int	atoi_over_int_min_test(void);
int	atoi_space_start_test(void);
int	atoi_alpha_start_test(void);
int	atoi_all_alpha_test(void);
int	atoi_alpha_end_test(void);

#endif
