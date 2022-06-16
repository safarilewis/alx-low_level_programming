#include "main.h"
/**
 *_strcmp - Compares two strings
 *@s1: First string
 *@s2: Second string
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
  int less, equal, more;
  less = -1;
  equal = 0;
  more = 1;

  int i, j;
  i = 0;
  j = 0;

  while (*(s1 + i))
    {
    i++;
    }
  while (*(s2 + j))
    {
    j++;
    }
  if (i > j)
    {
    return (more);
    }
  else if (i == j)
    {
    return (equal);
    }
  else
    {
      return (less);
    }
}
