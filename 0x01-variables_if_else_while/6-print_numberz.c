#include <stdio.h>

/**
 * main - prints all single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	iny num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
