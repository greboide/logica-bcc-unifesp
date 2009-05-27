#include <stdio.h>

int mdc(int a, int b){
  while (a != b){
    if (a>b)
      a = a-b;
    else
      b = b-a;
  }
  return a;
}

int mdc_recursivo_sub(int a,int b) {
  if(b==0)
    return a;
  else {
    if (a>b) {
      a = a-b;
      return mdc_recursivo_sub(a,b);}
    else {
      b = b-a;
      return mdc_recursivo_sub(a,b);}
  }
}
int mdc_recursivo_resto(int a,int b) {
  int r;
  if(b==0)
    return a;
  else {
    r = a%b;
    a = b;
    b = r;
    return mdc_recursivo_resto(a,b);}
}


int main(){
  int a,b,c;
  printf("entre com dois números para que calculemos o máximo divisor comum :\n");
  scanf("%i",&a);
  scanf("%i",&b);
  printf("O máximo divisor comum entre %d e %d é %d.\n",a,b,(mdc(a,b)));
  printf("O máximo divisor comum entre %d e %d é %d.\n",a,b,(mdc_recursivo_sub(a,b)));
  printf("O máximo divisor comum entre %d e %d é %d.\n",a,b,(mdc_recursivo_resto(a,b)));
}



