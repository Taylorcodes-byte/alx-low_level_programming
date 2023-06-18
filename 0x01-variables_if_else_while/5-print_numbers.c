#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bten = '0';

	while (bten <= '9')
	{
		putchar(bten);
		bten++;
	}
	putchar('\n');
	return (0);
}
