#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* @head: head first element ptr
* @idx: index
* @n: param data
* Return: pointer addr new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *hodlr = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; hodlr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = hodlr->next;
			hodlr->next = new_node;
			return (new_node);
		}
		else
		{
			hodlr = hodlr->next;
		}
	}
	return (NULL);
}
