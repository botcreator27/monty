#include "monty.h"

/**
 * get_instruct - calls funstion based on opcode
 * @stack: stack
 * @line_number: line of file being read
 * @tokens: segmented opcode
 */

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
	instructions[j].f(stack, line_number);
	match = 1;
	break;
	}
	}

	if (!match)
	{
	printf("L<%d>: unknown instruction %s\n", line_number, tokens[0]);
	exit(EXIT_FAILURE);
	}
}
