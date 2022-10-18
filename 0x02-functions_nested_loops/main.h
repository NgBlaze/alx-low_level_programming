#ifndef print_alphabett
#define print_alphabett
#include "_putchar.c";

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
	/* prints new line */
	putchar('\n');


}

#endif
