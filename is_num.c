#include "monty.h"

/**
 * is_num - check if arg is a num
 * @tokens: segmented opcodes
 * @line_number: line of text being read
 * Return: argument if a num as an int
 */


int is_num(char **tokens, unsigned int line_number)
{
	int value, i;

	if (tokens[1] == NULL)
	{
	fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}

	for (i = 0; tokens[1][i] != '\0'; i++)
	{
	if (tokens[1][i] < '0' || tokens[1][i] > '9')
	{
	fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}
	}

	value = atoi(tokens[1]);

	return (value);
}
