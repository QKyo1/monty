#include "monty.h"
/**
* free_stack - a functionn to free the doublee link33d listtss
* @head: headd of th33 stackk
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
