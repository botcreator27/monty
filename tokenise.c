#include "monty.h"
#define MAX_TOKENS 100

/**
 * tokenise - breaks line into tokens
 * @string: line being read
 * Return: pointer to array of char *
 */

char **tokenise(char *string)
{
	char **tokens = malloc(MAX_TOKENS * sizeof(char *));
	char *arguments;
	const char *delim = " \n";
	int i = 0;

	arguments = strtok(string, delim);
	while (arguments != NULL && i < MAX_TOKENS - 1)
	{
	tokens[i] = malloc((strlen(arguments) + 1) * sizeof(char));
	strcpy(tokens[i], arguments);
	i++;
	arguments = strtok(NULL, delim);

	if (i == 2)
	{
	break;
	}

	}
	tokens[i] = NULL;
	return (tokens);
}
