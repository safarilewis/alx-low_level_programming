#include <stdio.h>
/**
 *main - Entry point
(*
Description: Prints letters except q and e)?
*Return: Zero
*/
int main()
{
  char ch;
  for(ch='a';ch<'z',ch!='e',ch!='q';ch++){
    putchar(ch);}
  return (0);
}    
