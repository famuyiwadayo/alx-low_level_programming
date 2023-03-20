#include <stdio.h>

/**
 * main - Entry function
 * Description - This is the main entry point of this program
 * Return: Always 0 success
 */

int main(void)
{
	unsigned int i = '0';

	while (i <= 'f')
	{
		if (i <= '9' || i >= 'a')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
