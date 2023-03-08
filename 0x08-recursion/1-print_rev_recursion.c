#include "main.h"
/**
 * _print_rev_recursion - Function that prints string in reverse
 *
 * @s: Input chracter
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
