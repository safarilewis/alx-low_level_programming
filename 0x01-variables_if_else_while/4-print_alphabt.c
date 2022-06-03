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
  for(ch='a';ch<='z';ch++){
    if(ch!='q' && ch!='e'){
      putchar(ch); }
  }
  putchar('\n');
  return (0);
}    
