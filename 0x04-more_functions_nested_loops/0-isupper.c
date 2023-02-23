#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: character to check in function
 * wrx
 * Return: 1 (if c is uppercase) else 0
 */
int _isupper(int c)
{
	char ch;

	printf("Please Enter Character: ");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z')
		_putchar("This is UPERCASE");
			return (1);
	else
		_putchar("This is lowercase");

	return (0);
}
