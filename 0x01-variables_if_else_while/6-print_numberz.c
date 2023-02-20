#include<stdio.h>
/**
 * main -  single digits base 10 starting from 0 with putchr
 * wrx
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

