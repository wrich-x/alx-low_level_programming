#include "main.h"
/**
 * _isdigit - function that checks for digits 0 - 9
 * wrx
 * @c: Character defined in int _isdigit(int c);
 * Return: 1 (if true) else returns 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
