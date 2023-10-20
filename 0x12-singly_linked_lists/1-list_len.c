#include "main.h"
/**
 * list_len - counters number of node in linkedlist
 * @h: head param
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
