#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                        order using the Insertion sort algorithm
 *
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !(*list) || !(*list)->next)
		return;


	current = (*list)->next;
	while (current)
	{
		tmp = current->prev;
		while (tmp && tmp->n > current->n)
		{
			/* Reorganize the pointers to sort the list */
			if (tmp->prev)
				tmp->prev->next = current;
			if (current->next)
				current->next->prev = tmp;

			tmp->next = current->next;
			current->prev = tmp->prev;

			tmp->prev = current;
			current->next = tmp;

			tmp = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
