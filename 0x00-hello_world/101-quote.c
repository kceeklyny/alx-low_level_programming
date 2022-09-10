#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
	char ch[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(STDOUT_FILENO, ch, 59);
	return (1);

}
