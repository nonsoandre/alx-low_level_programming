#include "lists.h"
/**
  * add_nodeint_end - add a node at the end
  * @head: head element first
  * @n: param n to add
  * Return: ptr addr of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *hodlr = *head;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (hodlr->next)
		hodlr = hodlr->next;
	hodlr->next = ptr;
	return (ptr);
}
