#include <stdio.h>
/**
 *main - Entry point
(*
*Description: Printing hexadecimal numbers)?
*Return: Zero
*/
int main(void)
{
char ch;
char sh;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch); }
for (sh = 'a'; sh < 'g'; sh++)
{
putchar(sh); }
putchar('\n');
return (0); }
