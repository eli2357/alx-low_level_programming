#include "main.h"

/**
 * _isupper - checkfor uppercase characters
 * @c: function parameter
 * Return: 1 0n success 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
