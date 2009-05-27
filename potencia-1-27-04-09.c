#include <stdio.h>
#include <math.h>

int fatorial(int n){
  if (n == 0)
    return 1;
  else
    return (n*fatorial(n-1));
}

float ex(int x, int n){
  int i;
  float aux=0;
  for(i=0;i<n;i++){
    aux += ((pow(x,i))/(fatorial(i)));
    printf("%f,,,%d\n",aux,i);
  }
  return aux;
}

int main(int argc, char *argv[])
{
  float val;
  int x,n;
  printf("Entre com o valor de x e de n\n");
  scanf("%d",&x);
  scanf("%d",&n);
  val = ex(x,n);
  printf("O valor de e elevado a x é de %f\n",val);
    return 0;
}

