#include "holberton.h"

/**
 * prime_look - find the prime number
 * @x: input number
 * @look: prime look
 *
 * Description: is prime or not
 * Return: 1 or 0
 */

int prime_look(int x, int look)
{
	int is_prime = 0;
	int modul = x % look;

	if (x == look)
		return (1);
	if (modul == 0)
		return (0);

	is_prime = prime_look(x, look + 1);

	return (is_prime);
}

int prime_look(int x, int look);
/**
 * is_prime_number -  determine if a number is prime
 * @n: input number
 *
 * Description:  eturns 1 if the input integer is a prime number
 * otherwise return 0.
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int prime;

	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);

	prime = prime_look(n, 2);

	return (prime);
}

