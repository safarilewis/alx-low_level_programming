#include "main.h"
#include <stdio.h>
/**
 *_puts - Entry point
 *@str: Parameter
 *Return: nothing
 */
void _puts(char *str)
{
fwrite(stdout,"%sn\n", *str);
}
