#include "main.h"

/**
 * _abs- Print man last digit of a number.
 * @n: int to get the last digit from.
 * Return: Last digit value.
 */

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
