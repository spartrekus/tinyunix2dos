
#include <stdio.h>

int main() 
{
  int c;
  while ( (c=getchar()) != EOF )  
  {
    if (c == '\r')  
    {                 }

    else if (c == 0x0C )    // ^L char
    {                 }

    else if (c == 0x95 )   //vim <95>
    {                 }

    else 
    {  putchar(c);    }
  }
  return 0;
}



