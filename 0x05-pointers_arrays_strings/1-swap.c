#include "main.h"
/**
 *swap_int - Entry point
 *
 *@a: Parameter
 *@b: Parameter
 */
void swap_int(int *a, int *b)
{
  *b = *a;
  *a = **b;
}
