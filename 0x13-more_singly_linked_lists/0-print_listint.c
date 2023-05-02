#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
        listint_t *ptr = h;
	size_t num = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		num++;
		ptr = ptr->next;
	}

	return (num);
}
