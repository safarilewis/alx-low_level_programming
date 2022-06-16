#include "main.h"
/**
 *reverse_array - Reverse the elements in an array
 *@a: Parameter
 *@n: Parameter
 *Return: array
 */
void reverse_array(int *a, int n)
{
  int i;
  i = 0;
  while (*(a + i) && (i < n))
    {
      *(a + i) = *(a + n);
      i++;
      n--;
    }
}
