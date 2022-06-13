#include "main.h"
/**
 *rev_string - Entry point
 *@s: Parameter
 */
void rev_string(char *s)
{
int i;
while (*(s+i))
i++;
i = i - 1;
while (i >= 0)
{
putchar(*(s+i));
i--;
}
}
