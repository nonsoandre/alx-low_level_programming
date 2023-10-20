#include "main.h"
/**
 * print_list - prints elements of a list_t list
 * @h: const ptr
 * Return: it returns nodes's number as counter
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
