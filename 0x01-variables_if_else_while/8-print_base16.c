#include<stdio.h>
/**
 * main- prints hexadecimal numbers
 *
 */
int main(void)
{
	char num = '0';
	char let = 'a';

	while(num <= '9')
	{putchar(num);
		num++;
	}
	while(let <= 'f')
	{
		putchar (let);
		let++;
	}
	putchar('\n');
	return (0);
}
