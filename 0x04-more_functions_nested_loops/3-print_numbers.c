#include "main.h"
/**
 * print_numbers - prints numbers 0 - 9 ith _putchar
 * wrx
 * Return: 0 (success)
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
