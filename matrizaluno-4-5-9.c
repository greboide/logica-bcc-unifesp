#include <stdio.h>
#define N 1
#define M 5
int main(int argc, char *argv[])
{
  float matal[N][M],mf;
  int i,j,aux=0;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < M; ++j)
    {
      if (j >= 4){
        aux = 0;
        mf = (matal[i][0] + matal[i][1] + matal[i][2] + matal[i][3])/4;
        matal[i][4]=mf;
        printf("teste: %f\n",matal[i][4]);
      }
      else {
        aux++;
        printf("Digite a nota %d",(j + 1));
        scanf("%f",&matal[i][j]);
      }
    }
  }
    for ( i = 0; i < N; ++i)
  {
    for ( j = 0; j < M; ++j)
    {
      if (j>=4)
        printf("mf = %f.\n",matal[i][j]);
      else
        printf("%.2f\t",matal[i][j]);
    }}
    return 0;
}

