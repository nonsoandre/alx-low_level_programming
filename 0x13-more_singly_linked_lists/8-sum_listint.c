#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: head of node ptr, first element
 * Return: the sum of data in each node
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hodlr;

	hodlr = head;

	while (hodlr)
	{
		sum += hodlr->n;
		hodlr = hodlr->next;
	}
	return (sum);
}
