#include <stdio.h>
#include <unistd.h>

/**
 * main - ppid
 *
 * Return: Always 0.
 */

int master(void)
{
	pid_t ppid = getppid();

	printf("%u\n", ppid);

	return (0);
}
