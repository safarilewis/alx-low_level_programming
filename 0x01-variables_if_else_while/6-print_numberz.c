#include <stdio.h>
/**
 *main - Entry point
(*
*Description: where the code starts functioning)?
*Return: zero
*/
  int main()
{
  int i;
  for(i=0;i<10;i++){
    putchar((i%10) + '0'); }
  putchar('\n');
  return (0); }