#include <stdio.h>

/**
 * main - Entry function
 * Description - the main entry point
 * Return: Always 0 success
 */
int main(void)
{
	char ascii_a = 'a';
	char ascii_z = 'z';

	while (ascii_a <= ascii_z)
	{
		putchar(ascii_a);
		if (ascii_a == ascii_z && ascii_a != 'Z')
		{
			ascii_a = 'A';
			ascii_z = 'Z';
			putchar(ascii_a);
		}
		ascii_a++;
	}
	putchar('\n');
	return (0);
}
