#include "main.h"
#include <stdio.h>
/**
 *add - Prints numbers up to 98
 */
void print_to_98(int n)
{
  if (n >= 98)
    {
      for (n = n;n >= 98;n--)
	{
	  printf("%d, ", n);
	}
    }
      else if (n <= 98) 
	{
	  for (n = n;n <= 98;n++)
	    {
	      printf("%d, ", n);
	    }
	  _putchar ('\n');
	}
}
