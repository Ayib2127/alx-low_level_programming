
# include "main.h"
/**
 * _isupper - checks for uppercase.
 * @c: character to check.
 * Return: 1 if c is uppercase, otherwise return 0.
 */
char _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
