#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

int substring(char seq[], char sub[], int cont){

  int i;
  for(i=0; sub[i] != '\0'; i++)
    if(seq[cont+i] != sub[i]) return 0;

  return 1;
}

int main(){
  int i, tseq, tsub, x=0;
  char seq[N + 1], sub[N + 1];

  printf("Entre com a sequencia genetica do tipo atgcactg.\n");
  scanf("%s", seq);
  printf("Entre com a subsequencia genetica do tipo actg.\n");
  scanf("%s", sub);

  tseq = strlen(seq);
  tsub = strlen(sub);

  for(i=0; i<=(tseq - tsub); i++)
    x += substring(seq, sub, i);


  printf("\nO numero de vezes que a sequencia apareceu foi %d\n", x);
  return 0;
}



