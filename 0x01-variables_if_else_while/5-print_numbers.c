#include <stdio.h>

/**
 * main - Entry function
 * Description - this is the main entry point of this program
 * Returns - always 0 success
 */

int main(void)
{
	unsigned int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
