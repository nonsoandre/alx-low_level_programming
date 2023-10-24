#include "lists.h"
/**
  * free_listint - free list to have space
  * @head: head firstelmt
  * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *hodlr;

	while (head)
	{
		hodlr = head->next;
		free(head);
		head = hodlr;
	}
}
