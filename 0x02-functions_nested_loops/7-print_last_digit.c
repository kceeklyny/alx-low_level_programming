#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int ld;
	int var;

	if (n < 0)
	{
		var = ld % 10;
		ld = -1 * var;
		return (ld);
	}
	else
	{
		ld = n % 10;
		return (ld);
	}
}
