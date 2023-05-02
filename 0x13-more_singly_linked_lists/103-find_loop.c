#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a1 = head;
	listint_t *a2 = head;

	if (!head)
		return (NULL);

	while (a1 && a2 && a2->next)
	{
		a2 = a2->next->next;
		a1 = a1->next;
		if (a2 == a1)
		{
			a1 = head;
			while (a1 != a2)
			{
				a1 = a1->next;
				a2 = a2->next;
			}
			return (a2);
		}
	}
	return (NULL);
}
