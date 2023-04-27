#include <stdio.h>
#include "lists.h"
/**
 * print_list - print out the elements of a list
 * @h: pointer to print
 * Return: the number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n",h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
