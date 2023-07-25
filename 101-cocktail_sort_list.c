#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in
 *                      ascending order using the Cocktail sort algorithm
 *
 * @list: Double pointer to the head of the doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *left, *right, *end;

	if (!list || !(*list) || !(*list)->next)
		return;

	end = NULL;
	do {
		swapped = 0;
		left = *list;
		/* Forward pass (similar to bubble sort) */
		while (left->next != end)
		{
			right = left->next;
			if (left->n > right->n)
			{
				swap_nodes(list, left, right);
				print_list(*list);
				swapped = 1;
			}
			left = left->next;
		}
		end = left;
		/* If no swap happened, the list is sorted */
		if (swapped == 0)
			break;
		swapped = 0;
		right = left->prev;
		while (right != *list)
		{
			left = right->prev;
			if (left->n > right->n)
			{
				swap_nodes(list, left, right);
				print_list(*list);
				swapped = 1;
			}
			right = right->prev;
		}
	} while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 *
 * @list: Double pointer to the head of the doubly linked list
 * @a: First node to swap
 * @b: Second node to swap
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	else
		*list = b;

	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;

	a->prev = b;
	b->next = a;
}
