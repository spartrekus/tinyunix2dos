
// author : jpierri, bsd
// compile:  gcc tinyunix2dos.c -o tinyunix2dos

#include <stdio.h>
int main() {
  int c;
  while( (c=getchar()) != EOF )  {
    if (c == '\n') putchar('\r');
    putchar(c);
  }
  return 0;
}
