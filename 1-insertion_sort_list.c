#include "sort.h"
/**
 * insertion_sort_list - Entry Function
 * @list: Pointer
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curr, *prev, *t;
if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;
curr = (*list)->next;
while (curr != NULL)
{
	t = curr;
	prev = curr->prev;
	while (prev != NULL && t->n < prev->n)
	{
		if (t->next != NULL)
			t->next->prev = prev;
		prev->next = t->next;
		t->next = prev;
		if (prev->prev != NULL)
			prev->prev->next = t;
		t->prev = prev->prev;
		prev->prev = t;
		if (t->prev == NULL)
			*list = t;
		print_list(*list);
		prev = t->prev;
	}
	curr = curr->next;
}
}
