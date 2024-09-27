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
	int value = 0; /* change to argument later */
	stack_t *new_node;

	/* if arg not valid, print error ref to line */
	fprintf(stderr, "L<%d>: usage: push integer\n", line_number);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
	(*stack)->prev = new_node;
	}

	*stack = new_node;
}
