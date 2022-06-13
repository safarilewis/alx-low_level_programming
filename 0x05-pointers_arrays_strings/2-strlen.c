#include "main.h"
/**
 *_strlen - Entry point
 *@s: Parameter
 *Return: i
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
