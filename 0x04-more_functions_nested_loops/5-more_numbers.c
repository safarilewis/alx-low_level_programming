#include "main.h"
/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */
void more_numbers(void)
{
char i, j;
for (j = '0'; j < '10'; j++)
{
for (i = '0'; i <= '14'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
