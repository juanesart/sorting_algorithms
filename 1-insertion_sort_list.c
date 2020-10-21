# incluye  " sort.h "

/ * *
 * insertion_sort_list - algoritmos de lista de ordenación de inserción
 * @list: puntero de lista
 * Devolución: Sin devolución
 * /
void  insertion_sort_list ( listint_t ** lista)
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
