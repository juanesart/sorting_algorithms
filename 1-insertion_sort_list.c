#include "sort.h"

/**
 * insertion_sort_list - insertion sort list algorthms
 * @list: list pointer
 * Return: No Return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *act, *sw, *temp;

	if (!list || *list == NULL)
		return;
	if (*list->next == NULL)
		return;
	act = *list;
	while (act->next != NULL)
	{
		sw = act->next;
		if (act->n > sw->n)
		{
			temp = act;
			while (temp != NULL && temp->n > sw->n)
			{
				temp->next = sw->next;
				if (tmp->next != NULL)
					temp->next->prev = temp;
				sw->prev = temp->prev;
				if (sw->prev != NULL)
					sw->prev->next = sw;
				else
					*list = sw;
				temp->prev = sw;
				sw->next = temp;
				print_list(*list)
				temp = sw->prev;
			}
			continue;
		}
		act = act->next;
	}
}
