#include "main.h"
#include<stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 5;

	printf("Before: %d\n", num);

	reset_to_98(&num);
	printf("After: %d\n", num); 
	return 0;
}

