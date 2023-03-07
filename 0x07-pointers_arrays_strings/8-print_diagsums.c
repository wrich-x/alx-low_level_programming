#include <main.h>
#include <stdio.h>
/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
   */
void print_diagsums(int *a, int size)
{
    int diagonal1_sum = 0;
    int diagonal2_sum = 0;

    for (int i = 0; i < size; i++) 
    {
        diagonal1_sum += matrix[i][i];
        diagonal2_sum += matrix[i][size-i-1];
    }

    printf("Diagonal 1 sum: %d\n", diagonal1_sum);
    printf("Diagonal 2 sum: %d\n", diagonal2_sum);
}

