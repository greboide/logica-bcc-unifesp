#include <stdio.h>
char strA[80] = "Esta é uma string constante";
char strB[80];
int main()
{
  char *pA;
  char *pB;
  printf("%s\n",strA);
  pA = strA;
  printf("%s\n",pA);
  pB = strB;
  printf("\n");
  while(*pA != '\0')
    {
      *pB++ = *pA++;
    }
  *pB = '\0';
  printf("%s\n",strB);
  return 0;
}
