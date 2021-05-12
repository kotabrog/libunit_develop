/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:04:23 by hida              #+#    #+#             */
/*   Updated: 2021/05/09 21:09:26 by hida             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <string.h>
# include "../framework/libunit.h"
# include "libft_sp/libft_sp.h"

int	strlen_launcher(t_result *result);
int	strlen_test_ok(void);
int	strlen_test_segv(void);

int	isnum_launcher(t_result *result);
int	isnum_test_ng(void);

int	strcpy_launcher(t_result *result);
int	strcpy_test_bus(void);
int	strcpy_test_abt(void);

int	prime_count_launcher(t_result *result);
int	prime_count_test_tle(void);

#endif
