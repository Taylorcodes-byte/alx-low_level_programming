#include<stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;

	printf("Before swap: n1 = %d, n2 = %d\n", n1, n2);

	swap_int(&n1, &n2);
	printf("After swap: n1 = %d, n2 = %d\n", n1, n2);
	return (0);
}
