#include "main.h"
/**
 *add - Prints numbers up to 98
 */
void print_to_98(int n)
{
  if (n >= 98)
    {
      for (n = n;n >= 98;)
	{
	  _putchar (n);
	  _putchar (',');
	  _putchar (' ');
	  n -=;
	}
      else if (n <= 98) 
	{
	  for (n = n;n <= 98;)
	    {
	      _putchar (n);
	      _putchar (',');
	      _putchar (' ');
	      n +=;
	    }
	  _putchar ('\n');
	}


