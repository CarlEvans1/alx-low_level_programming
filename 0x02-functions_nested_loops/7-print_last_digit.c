#include "main.h"
/**
 * print_last_digit - print last digit
 * @h: function parameter
 * Return: k
 */
int print_last_digit(int h)
{
int i;
i = h % 10;
if (h < 0)
i = -i;
_putchar(h + '0');
return (h);
}
