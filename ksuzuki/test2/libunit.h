/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:43:20 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/08 17:13:30 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/wait.h>
# include <unistd.h>

# define SUCCESS 0
# define ERROR 1
# define KO 255

typedef struct	s_unit_test
{
	char			*func_name;
	int				(*func)(void);
	struct s_unit_test	*last;
	struct s_unit_test	*next;
}				t_unit_test;

typedef struct	s_result
{
	int			success_num;
	int			total_num;
}				t_result;


#endif