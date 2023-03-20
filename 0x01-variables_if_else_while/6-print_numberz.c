#include <stdio.h>

/**
 * main - Entry function
 * Description - This is the main entry point of this program
 * Return: Always 0 success
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
