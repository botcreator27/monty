#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * push_op - push an element unto stack
 * @stack: the stack to be manipulated
 * @line_number: line containing instruction
 *
 */

void push_op(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	printf("L<%d>: error", line_number);
	exit(EXIT_FAILURE);
	}

	new_node->n = push_value;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
	(*stack)->prev = new_node;
	}

	*stack = new_node;
}
