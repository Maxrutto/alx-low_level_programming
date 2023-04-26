#include <unistd.h>

/**
 * _puts - function for put
 * @str: String array
 *
 * Return: Return each element in array
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (write(1, &str[i], 1) != 1)
			return (-1);
	}

	return (i);
}
