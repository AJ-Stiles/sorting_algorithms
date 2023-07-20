#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                        using the Insertion sort algorithm
 *
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    if (!list || !(*list) || !(*list)->next)
        return;

    listint_t *current = (*list)->next;

    while (current)
    {
        listint_t *tmp = current->prev;
        int value = current->n;

        while (tmp && tmp->n > value)
        {
            tmp->next->n = tmp->n;
            tmp = tmp->prev;
        }

        if (!tmp)
        {
            (*list)->n = value;
        }
        else
        {
            tmp->next->n = value;
        }

        print_list(*list);

        current = current->next;
    }
}

