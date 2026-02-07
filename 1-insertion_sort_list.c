#include "sort.h"
/**
 * insertion_sort_list - sorts a list using insertion algorithm
 * @list: the list
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *tmp;
	if (list != NULL && *list != NULL)
	{
		current = (*list)->next;
		while (current)
		{
			tmp = current->next;
			prev = current->prev;
			while (prev)
			{
				if (current->n < prev->n)
				{
					prev->next = current->next;
					if (current->next != NULL)
						current->next->prev = prev;

					current->prev = prev->prev;
					current->next = prev;

					if (prev->prev)
						prev->prev->next = current;
					else
						*list = current;
					prev->prev = current;
					prev = current->prev;
					print_list(*list);
				}
				else
					break;
			}
			current = tmp;
		}
	}
}
