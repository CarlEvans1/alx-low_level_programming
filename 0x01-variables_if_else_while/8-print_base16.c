#include <stdio.h>
/**
 * main - numbers of base 16
 * Return: 0
 */
int main(void)
{
int j;
char g;
for (j = 0 ; j < 10 ; j++)
putchar(j + '0');
for (g = 'a' ; g <= 'f' ; g++)
putchar(g);
putchar('\n');
return (0);
}
