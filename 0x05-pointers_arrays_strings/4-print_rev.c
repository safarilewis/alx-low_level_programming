#include "main.h"
/**
 *print_rev - Entry point
 *@s: Parameter
 *Return: Nothing
 */
void print_rev(char *s)
{
int x = -1;
while (*(s+x))
{
_putchar(*(s+x));
x--;
}
_putchar('\n');
}
