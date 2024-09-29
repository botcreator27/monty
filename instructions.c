#include "monty.h"

/**
 * get_instruct - calls funstion based on opcode
 * @stack: stack
 * @line_number: line of file being read
 * @tokens: segmented opcode
 */

int push_value;

void get_instruct(char **tokens, stack_t **stack, unsigned int line_number)
{
	int j;
	int match = 0;

	instruction_t instructions[] = {
	{"push", &push_op}, {"pall", &pall_op}, {NULL, NULL}
	};

	for (j = 0; instructions[j].opcode != NULL; j++)
	{
	if (strcmp(instructions[j].opcode, tokens[0]) == 0)
	{
	match = 1;

	if (strcmp(tokens[0], "push") == 0)
	{
	push_value = is_num(tokens, line_number);
	}

	instructions[j].f(stack, line_number);
	break;
	}
	}

	if (!match)
	{
	fprintf(stderr, "L<%d>: unknown instruction %s\n", line_number, tokens[0]);
	exit(EXIT_FAILURE);
	}
}
