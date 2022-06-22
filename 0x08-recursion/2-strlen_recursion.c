#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string
 *@s: String to be checked
 *Return: void
 */
void _strlen_recursion(char *s)
{
  int i;
  i = 0;
  if (*s != '\0')
    {
      i = i + 1;
      _strlen_recursion(s + 1);
    }
  return (i);
}
