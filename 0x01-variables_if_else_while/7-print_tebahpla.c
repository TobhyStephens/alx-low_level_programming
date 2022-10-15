#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char ps;

	for (ps = 'z'; ps >= 'a'; ps--)
		putchar(ps);

	putchar('\n');

	return (0);
}
