#include <stdio.h>

/**
 * main - Entry function
 * Description - the main entry point
 * Return: Always 0 success
 */
int main(void)
{
	char ascii_a = 'a';

	while (ascii_a <= 'z')
	{
		putchar(ascii_a);
		ascii_a++;
	}
	putchar('\n');
	return (0);
}
