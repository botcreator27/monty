#include "monty.h"

/**
 * pall_op - prints all values on the stack
 * @stack: stack
 * @line_number: line of file being read
 */

void pall_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) line_number;

	if (*stack == NULL)
	{
	return;
	}

	temp = *stack;

	while (temp != NULL)
	{
	printf("%d\n", temp->n);
	temp = temp->next;
	}

}
