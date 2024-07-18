#include "main.h"
/**
 * malloc_checked - allocte
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
