#include <stdio.h>
/**
 * main - entry point
 * wrx
 * Description:  Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
{
	if (i != 'e' && i != 'q')
		putchar(i);
}
	putchar('\n');
	return (0);
}
