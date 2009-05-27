#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 20

// função dado para encher o vetor com inteiros especificos

int dado(int min,int max){
  int range, a, i, rmax;
  range = max - min;
  rmax = RAND_MAX;
  a = rand();
  i=((rand() / (rmax / range)) + min);
  return i;
}

int main(int argc, char *argv[]){

  int vectrand[N],i,j,m;
  int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, k = 0;
  // enche o vectrand que é o que vai ser analizado com números de 1 a 20
  srand(time(0));

  for (i = 0; i < N; i++)
    {
      m = (dado(1,10));
      vectrand[i] = m;
    }

  for (i = 0; i < N; i++)
    {
      j = vectrand[i];
            switch(j)
        {
        case 1: a++; break;
        case 2: b++; break;
        case 3: c += 1; break;
        case 4: d++; break;
        case 5: e++; break;
        case 6: f++; break;
        case 7: g++; break;
        case 8: h++; break;
        case 9: k++; break;
      /****************************
       * case '10': a10++; break; *
       * case '11': a11++; break; *
       * case '12': a12++; break; *
       * case '13': a13++; break; *
       * case '14': a14++; break; *
       * case '15': a15++; break; *
       * case '16': a16++; break; *
       * case '17': a17++; break; *
       * case '18': a18++; break; *
       * case '19': a19++; break; *
       * case '20': a20++; break; *
       ****************************/
        default:
          return 0;
        }
    }

      /*****************************
       * if(j==1)                  *
       *   a++;                    *
       * else{                     *
       *   if (j==2)               *
       *     b++;                  *
       *   else{                   *
       *     if (j==3)             *
       *       c++;                *
       *     else{                 *
       *       if (j==4)           *
       *         d++;              *
       *       else{               *
       *         if (j==5)         *
       *           e++;            *
       *         else{             *
       *           if (j==6)       *
       *             f++;          *
       *           else{           *
       *             if (j==7)     *
       *               g++;        *
       *             else{         *
       *               if (j==8)   *
       *                 h++;      *
       *               else{       *
       *                 if (j==9) *
       *                   k++;    *
       *               }}}}}}}}}   *
       *****************************/
  printf("O vetor analisado possui %d 1, %d 2, %d 3, %d 4, %d 5, %d 6, %d 7, %d 8,\n%d 9.\n", a, b, c, d, e, f, g, h, k);
  return 0;
}


