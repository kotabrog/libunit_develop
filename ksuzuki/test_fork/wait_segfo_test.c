#include <sys/wait.h>   // fork/wait
#include <signal.h>

#include <unistd.h>     // fork/sleep

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include <err.h>
#include <errno.h>

#define SUCCESS 0
#define ERROR 1

int main(int argc, char *argv[])
{
	int status = 0;
	pid_t wait_pid;
	pid_t pid;

	pid = fork();

	if (-1 == pid)
	{
		err(ERROR, "can not fork");
	}
	else if (0 == pid)
	{
		// child
		puts ("child start");
		sleep (2);      // 子プロセスの長い処理
		int *a = 0;
		*a = 0;
		if (errno)
			perror("error");
		puts ("child end");
		exit (SUCCESS);
		/* NOTREACHED */
	}

	// parent
	printf ("parents, child is %d\n", pid);
	wait_pid = wait (& status);

	if (wait_pid == -1)
	{
		// wait が失敗した
		err (ERROR, "wait error");
	}

	printf ("child = %d, status=%d\n", wait_pid, status);

	exit (SUCCESS);
}