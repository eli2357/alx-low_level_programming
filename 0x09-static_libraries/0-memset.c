#include "main.h"
/**
 * _memset - fills memory
 * @s: area to fill
 * @b: constant
 * @n: number
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
