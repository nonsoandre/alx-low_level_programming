#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: node head ptr first elmt
 * @index: index of the node to be deleted
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hodlr = *head;
	listint_t *movr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hodlr);
		return (1);
	}
	while (i < index - 1)
	{
		if (!hodlr || !hodlr->next)
			return (-1);

		hodlr = hodlr->next;
		i++;
	}

	movr = hodlr->next;
	hodlr->next = movr->next;
	free(movr);
	return (1);
}
