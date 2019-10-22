#ifndef MAIN_FILE
#define MAIN_FILE __FILE__
#endif /* MAIN_FILE */

#include <stdio.h>

/**
 * main - print name of file with Macro
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", MAIN_FILE);
	return (0);
}
