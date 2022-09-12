#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char  alphab;
	char e = 'e';
	char q = 'q';

	for (alphab = 'a';  alphab <= 'z';  alphab++)
	{
		if (alphab != e && alphab != q)
			putchar(alphab);
	}
	putchar('\n');

	return (0);
}
