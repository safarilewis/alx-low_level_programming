#include "main.h"
/**
 *_print_rev_recursion - Printing a string in reverse using recursion
 *@s: String to be printed in reverse
 *Return: void
 */
void _print_rev_recursion(char *s)
{
  int i;
  i = 0;
  if (*s != '\0')
    {
      i = i + 1;
      _print_rev_recursion(s + 1);
    }
  if (*s == '\0')
    return;
  _putchar(*s);
  _print_rev_recursion(s + (i - 1));
}
