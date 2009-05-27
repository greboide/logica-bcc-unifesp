#include <stdio.h>

int main(int argc, char *argv[])
{
  int a=10,b=20,*c=&a;
  int d=a + b;
  printf("%d\n", d);
  *c= 30;
  d= *c + b;
  printf("%d\n",d);
  d = a + b;
  printf("%d\n",d);
  return 0;
}
