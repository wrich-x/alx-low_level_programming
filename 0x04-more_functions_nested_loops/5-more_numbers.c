#include "main.h"
/**
 * more_numbers - function to print number 10x
 * wrx
 * Return: void
 */
void more_numbers(void)
{
	int a, b;
	for (a = 1; a <= 10; i++)
	{
		for (b = 0; b <= 14; y++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}

			_putchar((b % 10) + '0');
		}

		_putchar('\n');
	}
}
