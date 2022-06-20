#include "main.h"
/**
*_strchr - Locates a character in a string
*@c: Character to be located
*@s: String to be checked
*Return: Location of c
*/
char *_strchr(char *s, char c)
{
int i;
int n;
i = 0;
while (*(s + i))
i++;
for (n = 0; n < i; n++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
  if (*(s + i) == c)
    return (s + i);
  return (0);
}
