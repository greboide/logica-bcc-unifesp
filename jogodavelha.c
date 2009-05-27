#include <stdio.h>
#include <string.h>

#define N 3

void imprimejogo(char jogon[N]){
  printf("%c|%c|%c\n",jogon[0],jogon[1],jogon[2]);
  printf("------\n");
  printf("%c|%c|%c\n",jogon[3],jogon[4],jogon[5]);
  printf("------\n");
  printf("%c|%c|%c\n",jogon[6],jogon[7],jogon[8]);
}

void jogadajogador(int jogo[N][N],char jogon[N*N+1]){
  int a,b,c,aux;
  printf("Qual sua próxima jogada?(1,1) a (3,3)\n");
  printf("Entre com a linha:");
  scanf("%d",&a);
  printf("\nEntre com a coluna:");
  scanf("%d",&b);
  aux = jogo[a-1][b-1];
  jogon[aux] = 'X';
}

void jogadapc(char jogon[N]){
  char *ptr;
  /* todo: checar se a condição é verdadeira senao returnar nulo ou algo parecido pode checar se deu velha por aqui também */
  ptr = strchr(jogon,' ');
  *ptr = 'O';
}

int procuraquemvence(char jogon[N*N+1],char L[2],int i,int j, int k){
  if (L[0]==jogon[i] && L[0]==jogon[j] && L[0]==jogon[k])
  {
    return 1;
  } else
    return 0;
}


int jogoacaboup(char jogon[N*N+1],char X[2],char O[2]){
  if ((procuraquemvence(jogon,X,0,1,2) ||procuraquemvence(jogon,X,3,4,5) ||procuraquemvence(jogon,X,6,7,8) ||procuraquemvence(jogon,X,0,3,6) ||procuraquemvence(jogon,X,1,4,7) ||procuraquemvence(jogon,X,2,5,8) ||procuraquemvence(jogon,X,0,4,8) ||procuraquemvence(jogon,X,2,4,6)) == 1)
  {
    return 1;
  } else if ((procuraquemvence(jogon,O,0,1,2) ||procuraquemvence(jogon,O,3,4,5) ||procuraquemvence(jogon,O,6,7,8) ||procuraquemvence(jogon,O,0,3,6) ||procuraquemvence(jogon,O,1,4,7) ||procuraquemvence(jogon,O,2,5,8) ||procuraquemvence(jogon,O,0,4,8) ||procuraquemvence(jogon,O,2,4,6)) == 1)
    {
      return 2;
    }
  else
    return 0;
}

int main(int argc, char *argv[])
{
  int status = 0,cont = 0,i,flag;
  int jogo[N][N] = {0,1,2,3,4,5,6,7,8};
  char jogon[N*N+1] = {"         "};
  char X[2] = {"X"}, O[2] = {"O"};
  printf("Quem vai começar jogando?\n(0 para o computador ou 1 para o usuário)\n");
  scanf("%d",&flag);
  imprimejogo(jogon);
  do {                          /* loop principal do jogo saindo daqui temos um resultado */
    if (flag == 0)
      {
        jogadapc(jogon);
        flag = 1;
      }else{
      jogadajogador(jogo,jogon);
      flag = 0;
    }
    imprimejogo(jogon);
    cont++;
    if (cont>=9){
      status = 3;}
    status = jogoacaboup(jogon,X,O);
  }while(status == 0);
  if (status == 1)
    {
      printf("Parabéns você venceu!\n");
    }else if (status == 2)
    {
      printf("Parabéns você conseguiu perder para o computador!\n");
    }
  else
    printf("Ih esse jogo deu velha.\n");
  return 0;
}
