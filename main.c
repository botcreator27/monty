#include "monty.h"

/**
 * main - gets file, parses and interprets instructions
 * @argv: array of arguments passed
 * @argc: argument count
 *
 * Return: 0 for success
 */


int main(int argc, char **argv)
{
	char line[256];
	FILE *file;
	unsigned int line_num = 0;
	char **tokens;
	stack_t *stack = NULL;
	int i;

	if (argc < 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}

	file = open_file(argv[1]);

	while (fgets(line, sizeof(line), file) != NULL)
	{
	line_num++;

	if (strlen(line) == 0 || strspn(line, " \n") == strlen(line))
	{
	continue;
	}

	tokens = tokenise(line);
	get_instruct(tokens, &stack, line_num);

	for (i = 0; tokens[i] != NULL; i++)
	{
	free(tokens[i]);
	}
	free(tokens);
	}
	fclose(file);
	return (0);
}
