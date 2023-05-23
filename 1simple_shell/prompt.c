#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

/**
 * main - Prints prompt and waits
 * for the user to input a command
 *
 * Return: Always 0.
 *
 */

int mamm(void)
{
	char command[100];

	pid_t pid;

	pid_t ppid;

	while (1)
	{
		printf("Maxx :) ");

		pid = getpid();

		ppid = getppid();


		fgets(command, sizeof(command), stdin);

		printf("%s\n", command);
		printf("Pid is %u\n", pid);
		printf("Ppid is %u\n", ppid);

		if (strcmp(command, "exit\n") == 0)
			break;
	}

	return (0);
}
