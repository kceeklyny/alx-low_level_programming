#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		ld = -1 * (ld % 10);
		return (ld);
	}
	else
	{
		ld = n % 10;
		return (ld);
	}
}
