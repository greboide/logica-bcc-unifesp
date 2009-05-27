#include <stdio.h>
#include <string.h>

#define N 20

int main(){
  int cont, cont_vogal=0;  
  char c1[5*N], c2[N], c3[N], c4[N];
  
  printf("Entre com 4 strings de no maximo %d caracteres cada.\n", N);
  scanf("%s", c1);
  scanf("%s", c2);
  scanf("%s", c3);
  scanf("%s", c4);
  
  strcat(c1, c2);
  strcat(c1, c3);
  strcat(c1, c4);
  
  printf("\nA string foi:\n%s\n", c1);
  return 0;
}

