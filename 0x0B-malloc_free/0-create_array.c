#include "main.h"
#include <stdio.h>
/**
 *create_array - Creates an array of characters
 *@size: Size of the array
 *@c: Character to initialize the array
 *Return: Pointer to array or NULL if empty
 */
char *create_array(unsigned int size, char c)
{
  if (size == 0)
	       return (NULL);
  char *ar;
  ar = malloc(size * sizeof(char));
  if (ar == NULL)
    {
      return (NULL);
    }
  unsigned int i;
  for (i = 0; i < size; i++)
    {
      a[i] = c;
    }
  return (a);
}
