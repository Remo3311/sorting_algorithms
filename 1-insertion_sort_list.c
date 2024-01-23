#include "sort.h"

/**
 * insertion_sort_list - Move a node forward until the one in front is smaller
 * @list: The pointer to the start of the list
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *walk;
	listint_t *bkwdwa;
	listint_t *prevb;

	if (list == NULL || *list == NULL)
		return;
	walk = *list;
	walk = walk->next;
	while (walk != NULL)
	{
		bkwdwa = walk;
		walk = walk->next;
		while (bkwdwa->prev != NULL)
		{
			prevb = bkwdwa->prev;
			if (bkwdwa->n < prevb->n)
			{
				prevb->next = bkwdwa->next;
				if (bkwdwa->next != NULL)
				{
					bkwdwa->next->prev = prevb;
				}
				bkwdwa->next = prevb;
				bkwdwa->prev = prevb->prev;
				if (bkwdwa->prev == NULL)
				{
					*list = bkwdwa;
				}
				else
					prevb->prev->next = bkwdwa;
				prevb->prev = bkwdwa;
				print_list(*list);
			}
			else
				break;
		}
	}
}
