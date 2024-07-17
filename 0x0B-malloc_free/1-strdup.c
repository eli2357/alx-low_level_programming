#include "main.h"
/**
 * _strdup - copies
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' i++)
		count++;


	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);

