#include <stdio.h>
float arearet(float a,float b){
  printf("A área do retângulo é: %f e ",(a*b));
}
float periret(float a,float b){
  printf("o perimetro do retângulo é: %f\n",(a+b)*2);
}


int main(void){
  float a,b;
  printf("Entre com a altura e a base do retângulo:\n");
  scanf("%f %f",&a,&b);
  arearet(a,b);
  periret(a,b);
  return 0;
}
