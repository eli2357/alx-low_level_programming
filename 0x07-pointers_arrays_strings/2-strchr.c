#include "main.h"
/**
 * _strchr - locate
 *  @s: string
 *  @c: character
 *  Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
