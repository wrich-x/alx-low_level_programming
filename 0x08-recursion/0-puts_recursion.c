#include "main.h"

/**
  * _puts_recursion - Print a string followed by a new line
  * @s: the string to print
  *
  * Return: Nothing.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

void print_string_recursive(char *str) {
    if (*str) {
        putchar(*str);
        print_string_recursive(str+1);
    } else {
        putchar('\n');
    }
}
