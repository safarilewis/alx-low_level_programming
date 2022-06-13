#include "main.h"
/**
 *swap_int - Entry point
 *
 *@a: Parameter
 *@b: Parameter
 */
void swap_int(int *a, int *b)
{
  int *p;
  *p = *a;
  *a = *b;
  *b = *p;
}
