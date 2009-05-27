#include <stdio.h>

int divquosres(int a,int b){
  printf("o dividendo é %i\n",a);
  printf("o divisor é %i\n",b);
  printf("o quociente é %i\n",a/b);
  printf("o resto é %i\n",a%b);
}


int main(void){
  int a,b;
  printf("Entre com dois números a serem divididos um pelo outro:\n");
  scanf("%d %d",&a,&b);
  divquosres(a,b);
  return 0;
}
