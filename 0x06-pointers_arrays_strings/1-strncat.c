#include "main.h"
/**
*_strncat - Adds two strings together
*@dest: Parameter
*@src: Parameter
*@n: Parameter
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
  int i,j;
  i = j = 0;
  while (*(dest + i))
    i++;
  for (j = 0; j < n && *(src + j) != '\0'; j++)
    *(dest + i) = *(src + j);
  if (j > n)
    *(dest + i) = *(src + n);
  return (dest);
}
