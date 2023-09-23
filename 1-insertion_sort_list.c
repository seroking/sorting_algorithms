#include "sort.h"

/**
 * insertion_sort_list - insertion sort list
 * @list: double pointer to a doubly linked list
 *
 * Return: no return value
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list)
		return;

	current = *list;

	while (current)
	{
		while (current->next && (current->n > current->next->n))
		{
			tmp = current->next;
			current->next = tmp->next;
			tmp->prev = current->prev;

			if (current->prev)
				current->prev->next = tmp;

			if (tmp->next)
				tmp->next->prev = current;

			current->prev = tmp;
			tmp->next = current;

			if (tmp->prev)
				current = tmp->prev;
			else
				*list = tmp;

			print_list(*list);
		}
		current = current->next;
	}
}
