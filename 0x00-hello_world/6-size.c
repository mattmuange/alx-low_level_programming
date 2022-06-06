#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\ln", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\ln", sizeof(aiinteger));
	printf("Size of a long int: %lu byte(s)\ln", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\ln", sizeof(alonglong));
	printf("Size of a float int: %lu byte(s)\ln", sizeof(afloat));

	return (0);
}
