#include <stdio.h>

int par(int *a){
  (a%2==0) ? a : 0;
}

int impar(int *a){
  (par(a)) ? 0 : a;
}

int main(){
  int pares[10],impares[10],numpar,numimpar,somapar,somaimpar,a;
  int num[10];
  printf("entre uma lista de 10 números :\n");

  for(a=0;a<10;a++){
    //    num[a]=(a+1);
    printf("%d",a);
  }

  for(a=0;a<10;a++){
    par(&num[a]) ? numpar +=1 : 0;
    impar(&num[a]) ? numimpar +=1 : 0;
  }

  for(a=0;a<numpar;a++){
    pares[a]=par(num[a]);
  }

  for(a=0;a<numimpar;a++){
    impares[a]=impar(num[a]);
  }

  for(a=0;a<numpar;a++){
    somapar += pares[a];
  }

  for(a=0;a<numimpar;a++){
    somaimpar += impares[a];
  }

  printf("A média dos %i impares é %f e a soma dos %i pares é %i.\n",numimpar,((float) somaimpar/numimpar),numpar,somapar);
}



