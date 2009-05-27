#include <stdio.h>
#include <ctype.h>
#define N 20

int main()
{
  char str[N];
  int c,i;
  int vog = 0, conso = 0, outros = 0;
  printf("Entre com uma frase e eu contarei quantas vogais você digitou!\n");
  fgets(&str,20,stdin);
  for ( i = 0; i < N; ++i)
    {
      c = str[i];
      switch (c) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        vog++;
        break;
      default:
        break;
      }

    }

  printf("Número de vogais digitadas: %d\n", (vog ));
  return 0;
}
