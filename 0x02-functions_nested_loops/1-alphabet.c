#include <stdio.h>
include "main.h"
/**
 *main - Prints the alphabet in lowercase using putchar only once
 *
 *
 *Return: Always zero
 */
void print_alphabet(void)
{
char c;
for (c = 'a';c <= 'z';c++){
putchar(c);
}
print_alphabet();
putchar('\n');
}
