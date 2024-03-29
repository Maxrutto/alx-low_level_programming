#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list list_t
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		count++;
	}

	return (count);
}
