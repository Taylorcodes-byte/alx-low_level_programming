#include<stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char let = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (let <= 'f')
	{
		putchar (let);
		let++;
	}
	putchar('\n');
	return (0);
}
