#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Return: Empty
 */
void free_listint2(listint_t **head)
{
	listint_t *hodlr;

	if (head == NULL)
		return;

	while (*head)
	{
		hodlr = (*head)->next;
		free(*head);
		*head = hodlr;
	}

	*head = NULL;
}
