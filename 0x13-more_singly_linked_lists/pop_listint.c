#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: header first prt element
 *Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int deleted_node;
	listint_t *hodlr;

	if (!head || !*head)
		return (0);

	deleted_node = (*head)->n;
	hodlr = (*head)->next;
	free(*head);
	*head = hodlr;

	return (deleted_node);
}
