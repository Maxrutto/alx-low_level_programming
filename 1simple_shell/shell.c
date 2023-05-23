#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define COMMAND_SIZE 200

/**
 * main - The shell itself
 *
 * Return: Always 0.
 */

int main(void)
{
	char command[COMMAND_SIZE];

	pid_t child_pid;

	while (1)
	{
		printf("Maxx :) ");

		if (fgets(command, COMMAND_SIZE, stdin) == NULL)
		{
			printf("\n");
			break;
		}

		command[strcspn(command, "\n")] = '\0';

		if (strcmp(command, "exit") == 0)
		{
			break;
		}


		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Child process creation failure");
			exit(1);
		}
		else if (child_pid == 0)
		{
			char *token;

			char *argv[COMMAND_SIZE / 2 + 1];

			int argc = 0;

			token = strtok(command, " ");

			while (token && argc < COMMAND_SIZE / 2)
			{
				argv[argc++] = token;
				token = strtok(NULL, " ");
			}
			argv[argc] = NULL;


			execve(command, argv, NULL);

			perror("Error\n");
			exit(1);
		}
		else
		{
			int status;
			wait(&status);

			if (WIFEXITED(status))
			{
				int exit_status = WEXITSTATUS(status);

				if (exit_status != 0)
				{
					printf("Non-zero exit status: %d\n", exit_status);
				}
			}
			else if (WIFSIGNALED(status))
			{
				int signal_no = WTERMSIG(status);

				printf("Terminated with signal: %d\n", signal_no);
			}
		}

	}

	return (0);
}
