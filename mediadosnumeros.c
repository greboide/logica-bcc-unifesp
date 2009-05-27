#include <stdio.h>

float medianum(){
  float cont, num, soma;
  cont = 0;
  num = 0;
  soma = 0;
  scanf("%f",&num);
  while(num > 0){
    printf("o número digitado foi %f, entre outro:\n",num);
    cont += 1;
    soma += num;
    scanf("%f",&num);
  }
  return (soma/cont);
}


int main(void){
  float soma;
  printf("Entre com números floateiros positivos(para calcular a média digite um negativo ou zero)\n");

  soma = medianum();
  printf("o valor da média dos números digitados é %f \n",soma);
  return 0;
}
