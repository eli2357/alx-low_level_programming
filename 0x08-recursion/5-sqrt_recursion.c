#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return
 * @n: number to
 *
 * Return: the resuling
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to finf
 * @n: number to calculate the
 * @i: Iterator
 *
 * Return: the re
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
