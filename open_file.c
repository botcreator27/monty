#include "monty.h"

/**
 * open_file - opens the file
 * @filename: file ton be opened
 * Return: pointer to opened file.
 */


FILE *open_file(char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
	}

	return (file);
}
