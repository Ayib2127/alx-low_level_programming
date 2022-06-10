#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character _putchar to std out.
* @c: the character to print
* Return: 1 on success.
*/
int _putchar(char _putchar)
{
return (write(1, &_putchar, 1));
}
