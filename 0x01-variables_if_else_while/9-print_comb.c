
#include <stdio.h>

/**
 * main - Short description, single line
 * a blank line
 * Description: Longer description of the function)?
 * Return: Description of the returned value
 */

int main(void)
{
	int ch;
	int counter;

	counter = 0;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	if (counter <= 8)
	{
		putchar(',');
		putchar(' ');
	}
	counter++;
	}
	putchar('\n');

	return (0);
}
