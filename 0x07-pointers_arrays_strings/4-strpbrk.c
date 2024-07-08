#include "main.h"
/**
 * _strpbrk - searches
 * @s: string
 * @accept: string
 * Return: accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
