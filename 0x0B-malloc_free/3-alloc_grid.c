#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid -  Create a 2D Array and return pointer
 *@width: Width of array
 *@height: Height of the array
 *Return: Dimensions of the array or NULL
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int **a;
  if (width <= 0 || height <= 0)
    return (NULL);
  a = (int **)malloc(sizeof(int) * height);
  if (a == NULL)
    return (NULL);
  for (i = 0; i < height; i++)
    {
      a[i] = (int *)malloc(sizeof(int) * width);
      if (a[i] == NULL)
	{
	  for (j = 0; j < i; j++)
	    free(a[j]);
	  free(a);
	  return (NULL);
	}
      for (j = 0; j < width; j++)
	{
	  a[i][j] = 0;
	}
    }
  return (a);
}
