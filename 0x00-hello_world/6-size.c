#include <stdio.h>
/**
 *main() - To print size of data types
 (*
 *Description: This is a function to print size of datatypes)?
 *Return: Zero
 */
int main(void)
{
char a;
int b;
float e;
printf("Size of a char: %lu. byte(s)\n",(unsigned)sizeof(a));
printf("Size of an int: %lu. byte(s)\n",(unsigned)sizeof(b));
printf("Size of a long int: %lu. byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a long long int: %lu. byte(s)\n",(unsigned long long)sizeof(b));
printf("Size of a float: %lu. byte(s)\n",(unsigned)sizeof(e));
 return (0); } 
