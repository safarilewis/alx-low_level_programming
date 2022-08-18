#include "main.h"
/**
* print_most_numbers -  prints the numbers except 2 and 4.
*/
void print_most_numbers(void)
{
  char c;
  while (c <= '9') & ((c != '2') || (c != '4'))
		       {
			 _putchar(c);
			 c++;
		       }
  _putchar('\n');
}
