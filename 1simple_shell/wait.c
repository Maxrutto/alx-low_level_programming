#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

int mainm(void)
{
	pid_t pid;

	/* child process is created */
	pid = fork();

	/* if fork fails */
	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	/* In child process */
	if (pid == 0)
	{
		printf("Child process\n");
	}

	/* In parent process */
	else
	{
		wait(NULL);
		sleep(30);
		printf("Parent process\n");
	}

	return (0);
}
