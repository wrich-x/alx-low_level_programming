#include <stdio.h>
/**
 * main - Emtry point
 * wrx
 * Description: prints the size of various types
 * Return: 0
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;

	/* Size of operator is used to evaluate the size of a variable */
	printf("Size of a char: %ld byte\n", sizeof(charType));
	printf("Size of an int: %ld bytes\n", sizeof(integerType));
	printf("Size of a long int: %ld bytes\n", sizeof(longintegerType));
	printf("Size of a long long int: %ld bytes\n", sizeof(longlongintegerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));

	return (0);
}
