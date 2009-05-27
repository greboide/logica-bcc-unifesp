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

void levetor(int vec[N],int n) {
  int i,j, arg;
  for ( i = 0; i < n; i++){
      printf("Entre com um argumento do vetor.\n");
      scanf("%d",&arg);
      vec[i] = arg;
      }
  printf("\n");
}

void escrevematriz(int matriz[N][N],int n){
  int i,j;
  for ( i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      {
        printf("%d , ",matriz[i][j]);
      }
      printf("\n");
  }
}

void escrevevetor(int vec[N],int n){
  int i,j;
  for ( i = 0; i < n; i++){
        printf("%d , ",vec[i]);
      }
      printf("\n");
}

void multmatrizvec(int matriz[N][N],int vecnew[N],int vec[N],int n){
  int i,j;
  for ( i = 0; i < n; i++){
        vecnew[i]=0;
      }
  for ( i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      {
         vecnew[i] += (matriz[j][i]*vec[i]);
      }
      printf("\n");
  }
}
void multmatrizmatriz(int matriz[N][N],int matriz2[N][N],int matriznew[N][N],int n){
  int i,j,h;
  for ( i = 0; i < n; i++){
    for (j = 0; j < n; j++)
        {
           matriznew[i][j] = 0;
        }}
  for ( i = 0; i < n; i++){
    for (h = 0; h < n; h++){
      for (j = 0; j < n; j++)
        {
           matriznew[i][h] += (matriz[i][j]*matriz2[j][h]);

        }
      printf("\n");
  }
}
}

int main(int argc, char *argv[])
{
  int matriz[N][N],matriz2[N][N],matriznew[N][N],vecnew[N],vec[N],i,j,n;
  printf("Entre com o valor do lado da matriz quadrada:\n");
  scanf("%d",&n);
  lematriz(matriz,n);
  lematriz(matriz2,n);
  //levetor(vec,n);
  //escrevematriz(matriz,n);
  multmatrizvec(matriz,vecnew,vec,n);
  multmatrizmatriz(matriz,matriz2,matriznew,n);
  escrevematriz(matriznew,n);
  //escrevevetor(vecnew,n);
  //escrevevetor(vec,n);
  return 0;
}
