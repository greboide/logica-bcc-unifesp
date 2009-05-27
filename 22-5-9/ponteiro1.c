#include <stdio.h>

int main(int argc, char *argv[])
{
  int num,valor;
  int *p;
  num=55;
  p=&num;
  valor=*p;
  printf("\n\n%d\n",valor);
  printf("Endereço para onde o ponteiro aponta: %p\n",p);
  printf("Valor da variável apontada: %d\n",*p);
  return 0;
}
