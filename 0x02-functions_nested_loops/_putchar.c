#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character.
 *
 * Return: 1 on success.
 */

int _putchar(char _putchar)
{
return (write(1, &_putchar, 1));
}

