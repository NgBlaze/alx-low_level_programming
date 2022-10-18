#include <stdio.h>


/**
 * print_alphabet - Prints a to z
 *
 * Description: A function that prints a alphabets
 * Return: Returns 0
 */


void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	putchar('\n');


}

/**
 * main - Calls the Function
 *
 * Description: A function that prints a string
 * Return: Returns 0
 */


int main(void)
{
  /* function call */
	print_alphabet();

	return (0);
}
