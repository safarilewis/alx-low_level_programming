#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase using putchar only once
 *
 *
 *Return: Always zero
 */
int main()
{
void print_alphabet()
{
char c;
for (c = 'a';c <= 'z';c++){
putchar(c);
}
print_alphabet();
putchar('\n');
return (0);
}
  
