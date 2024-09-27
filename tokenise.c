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
	int count = 0;

	arguments = strtok(string, delim);
	while (arguments != NULL && count < MAX_TOKENS)
	{
	tokens[count] = malloc((strlen(arguments) + 1) * sizeof(char));
	strcpy(tokens[count], arguments);
	count++;
	arguments = strtok(NULL, delim);
	}
	tokens[count] = NULL;
	return (tokens);
}
