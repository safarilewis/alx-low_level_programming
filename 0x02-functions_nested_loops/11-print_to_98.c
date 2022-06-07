#include "main.h"
#include <stdio.h>
/**
 *add - Prints numbers up to 98
 */
void print_to_98(int n)
{
  while (n != 98)
    {
      printf("%i, ", n);
      if (n > 98)
	n--;
      else
	n++;
    }
  printf("98\n");
}
