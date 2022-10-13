#include <stdio.h>

/**
 * main - Short description, single line
 * a blank line
 * Description: Longer description of the function)?
 * Return: Description of the returned value
 */

int main(void)
{
	int intType;

	float floatType;

	double doubleType;

	char charType;

	long int longintType;

	long long int longlongintType;
	/* Sizeof operator is used to evaluate the size of a variable */
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
