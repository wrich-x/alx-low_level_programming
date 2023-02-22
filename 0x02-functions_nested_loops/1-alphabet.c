#include "header.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * wrx
 * Return: void
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar("%s", alpha);
	}

	_putchar('\n');
}
