#include "main.h"

/**
 * _isupper - checks for  uppercase characters
 * @c: input character
 * Return: 1 if it ia an uppercase  and 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
