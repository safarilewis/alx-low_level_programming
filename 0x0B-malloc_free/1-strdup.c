#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Copy a string and return pointer to new string
 *@str: String to be copied
 *Return: Null or Pointer to new string
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *s;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
;
i++;
s = malloc(i * sizeof(char));
<<<<<<< HEAD
if (s == NULL)
return (NULL);
=======
>>>>>>> 68cdb5b149e637395d3651f01339be921b98089c
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
return (s);
}
