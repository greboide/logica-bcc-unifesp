#include <stdio.h>

int main(int argc, char *argv[])
{
  int y, *p, x;
  y=0;
  p= &y;
  x= *p;
  x=4;
  (*p)++;
  x--;
  (*p) += x;
  printf("\ny = %d\n",y);
  return 0;
}
