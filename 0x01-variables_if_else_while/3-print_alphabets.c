#include<stdio.h>
/**
 * main-prints lowercase and uppercase alphabets
 *
 */
int main(void)
{
	char l='a';
	char u='A';

	while(l<='z')
	{
		putchar(l);
		l++;
	}
	while(u<='Z')
	{
		putchar(u);
		u++:
	}
	putchar('\n');
	return (0);
}
