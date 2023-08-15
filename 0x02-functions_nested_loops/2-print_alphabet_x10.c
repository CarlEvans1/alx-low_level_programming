#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
int h;
char j;

for (h = 0 ; h < 10 ; h++)
{
for (j = 'a' ; j <= 'z' ; j++)
_putchar(j);
_putchar('\n');
}
}
