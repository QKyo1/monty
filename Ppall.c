#include "monty.h"
/**
 * f_pall - a functionn to print the stackk
 * @head: Head of th33 stackk
 * @counter: no used for counnt3r
 * Return: no retur3n
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
