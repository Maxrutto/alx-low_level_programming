#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int min(void)
{
	pid_t pid;
	pid_t ppid;

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	if (pid == 0)
	{
		printf("I am the child\n");
	}
	else
	{
		wait(NULL);
		sleep(10);
		ppid = getpid();
		printf("Parent pid is: %u\n", ppid);
	}

	return (0);
}
