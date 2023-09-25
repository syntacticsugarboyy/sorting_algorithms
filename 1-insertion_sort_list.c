#include "sort.h"

/**
 * insertion_sort_list - Insertion sort
 * @list: Pointer to head node
 *
 * Description: A function that uses insertion sort to rearrange a linked list.
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *run, *prev, *prev_in, *run_in;

	if (list == NULL)
		return;
	if ((*list) == NULL || (*list)->next == NULL)
		return;

	prev = *list;
	run = (*list)->next;
	temp = *list;
	while (run)
	{
		run_in = run;
		prev_in = prev;
		while (prev_in && prev_in->n > run_in->n)
		{
			if (prev_in->prev == NULL)
				temp = run_in;
			if (run_in == run)
				run = prev_in;
			if (run_in->next != NULL)
				run_in->next->prev = prev_in;
			run_in->prev = prev_in->prev;
			prev_in->next = run_in->next;
			run_in->next = prev_in;
			prev_in->prev = run_in;
			prev_in = run_in->prev;

			print_list(temp);
		}
		prev = run;
		run = run->next;
	}
	*list = temp;
}
