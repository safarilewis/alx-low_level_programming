#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Copy a string and return pointer to new string
 *@str: String to be copied
 *Return: Null or Pointer to new string
 */
char *_strdup(char *str)
{
  unsigned int i, j;
  char *s;
  if (str == NULL)
    {
      return (NULL);
    }
  for (i = 0; str[i]; i++)
    ;
   s = malloc(i * sizeof(char));
  for (j = 0; j < i; j++)
    {
      s[j] = str[j];
    }
  return (s);
}
