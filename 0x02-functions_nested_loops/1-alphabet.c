#include <stdio.h>
#include "main.h"

/**
 * alphab - Prints a to z
 *
 * Description: A function that prints a alphabets
 * Return: Returns 0
 */


int alphab(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);

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
	alphab();

	return (0);
}
