#include <stdio.h>

/**
 * main - Entry function
 * Description - This is the main entry point of this program
 * Return: Always 0 success
 */

int main(void)
{
	unsigned int i, j;
	unsigned int max = 10;

	for (i = 0; i < max; i++)
	{
		for (j = 0; j < max; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i + j != 2 * max - 3)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
