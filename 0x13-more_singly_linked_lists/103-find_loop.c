#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *		       a listint_t_linked list.
 * @head: A pointer to the head of the listint_list
 *
 * Return: if there isd no loop - NULL.
 *	   otherwise - the address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
