#include <stdio.h>

/**
 * main - Entry function
 * Description - This is the main entry point of this program
 * Return: Always 0 success
 */

int main(void)
{
	unsigned int i, j, k;
	unsigned int MAX = 10;

	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			for (k = 0; k < MAX; k++)
			{
				if (i != j && i < j && j != k & j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i + j + k != 3 * MAX - 6)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
