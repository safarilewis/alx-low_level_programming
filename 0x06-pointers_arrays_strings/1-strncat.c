#include "main.h"
/**
*_strncat - Adds two strings together
*@dest: Parameter
*@src: Parameter
*@n: Parameter
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
int i, j;
i = j = 0;
while (*(dest + i))
i++;
for (j = 0; j < n && *(src + j) != '\0'; j++)
*(dest + i) = *(src + j);
return (dest);
=======
 int i, j;
 i = j = 0;
 while (*(dest + i))
 i++;
 for (j = 0; j < n; j++)
 *(dest + i) = *(src + j);
 return (dest);
>>>>>>> ea8ef78640022812e8f9e74076ef6d15b08477bc
}
