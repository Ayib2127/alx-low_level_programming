#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character _putchar to std out.
 * @c: the character to prin * Return: 1 on success.

 * on error,
 */
int _putchar(char _putchar)
{
        return (write(1, &_putchar, 1));
}
