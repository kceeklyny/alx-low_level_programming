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
	int i;
	char alphab;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (alphab = 'a'; alphab <= 'f'; alphab++)
		putchar(alphab);
	putchar('\n');

	return (0);
}
