#include <stdio.h>
#define N 100

void lematriz(int matriz[N][N],int n) {
  int i,j, arg;
  for ( i = 0; i < n; i++){
    for (j= 0; j < n; j++){
      printf("Entre com um argumento da matriz.\n");
      scanf("%d",&arg);
      matriz[i][j] = arg;
      }
  printf("\n");}
}

void escrevematriz(int matriz[N][N],int n){
  int i,j;
  for ( i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      {
        printf("%d , ",matriz[i][j]);
      }
  }
}
int main(int argc, char *argv[])
{
  int matriz[N][N],i,j,n;
  printf("Entre com o valor do lado da matriz quadrada:\n");
  scanf("%d",&n);
  lematriz(matriz,n);
  escrevematriz(matriz,n);

  return 0;
}

