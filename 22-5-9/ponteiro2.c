#include <stdio.h>

int main(int argc, char *argv[])
{
  int num;
  int *p;
  num=55;
  p=&num;
  printf("\nValor inicial: %d\n",num);
  *p=100;
  printf("\nValor final: %d\n",num);
  return 0;
}
