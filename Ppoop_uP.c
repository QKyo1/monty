#include "monty.h"
/**
 * f_pop - a functionnn to pop on the top of thee stackk
 * @head: HEad of thee stackk
 * @counter: count44r
 * Return: no retun3m
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
