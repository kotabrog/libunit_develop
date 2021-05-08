/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuzuki <ksuzuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:42:53 by ksuzuki           #+#    #+#             */
/*   Updated: 2021/05/08 17:14:38 by ksuzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	execute_func(int (*func)(void))
{
	pid_t	pid;
	int		status;

	status = 0;
	pid = fork();
	if (pid == -1)
		return (ERROR);
	if (pid == 0)
		exit(!!(*func)());
	pid = wait(&status);
	if (WIFEXITED(status) && !WEXITSTATUS(status))
		return (SUCCESS);
	if (WIFEXITED(status) && WEXITSTATUS(status))
		return (KO);
	if (WIFSIGNALED(status))
		return (WTERMSIG(status));
}
