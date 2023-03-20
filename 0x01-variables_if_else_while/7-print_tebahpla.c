#include <stdio.h>

/**
 * main - Entry function
 * Description - the main entry point
 * Return: Always 0 success
 */
int main(void)
{
	char ascii_z = 'z';

	while (ascii_z >= 'a')
	{
		putchar(ascii_z);
		ascii_z--;
	}
	putchar('\n');
	return (0);
}
