#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string
 *@s: String to be checked
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
  int i;
  i = 0;
  if (*s != '\0')
    {
      _strlen_recursion(s + i++);
    }
  return (i);
}
