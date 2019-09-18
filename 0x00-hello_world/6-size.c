/**
 * main - 6. Size is not grandeur, and territory does not make a nation
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	/*print size of char */
	printf("Size of a char: ");
	printf("%lu", sizeof(char));
	printf(" bytes(s)\n");
	/* print size of int */
	printf("Size of an int: ");
	printf("%lu", sizeof(int));
	printf(" bytes(s)\n");
	/* print size of long int */
	printf("Size of a long int: ");
	printf("%lu", sizeof(long int));
	printf(" bytes(s)\n");
	/* print size of long long int */
	printf("Size of a long long int: ");
	printf("%lu", sizeof(long long int));
	printf(" bytes(s)\n");
	/* print size og float */
	printf("Size of a float: ");
	printf("%lu", sizeof(float));
	printf(" bytes(s)\n");

	return (0);
}
