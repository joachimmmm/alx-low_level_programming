#include <stdio.h>

/**
 * main - prints out the various sizes.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char is: %lu byte(s)\n", sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long is: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float is: %lu byte(s)\n", sizeof(f));
	return (0);
}

