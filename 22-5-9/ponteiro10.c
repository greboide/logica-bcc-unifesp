#include <stdio.h>
int g;

int fa(int m[20][20], int a, int cte, int *p1, int p2)
{
  int i, j;
  g = *p1;
  *p1 = p2;
  p2 = g;
  for (i = 0; i < a; i++)
    for (j = 0; j < a; j++)
      m[i][j] = (3*i+j+cte)%5;
  printf("%d %d\n", m[0][0], m[0][1]);
  printf("%d %d\n", m[0][0], m[0][1]);
  printf("%d %d %d\n", g, *p1, p2);
  return(cte);
}

void flin(int m[], int i)
{
  int g;
  for (g = 0; g < i; g++)
    printf("%d ", m[g]);
  printf("\n");
}

void fpr(int m[20][20], int a)
{
  int i;
  for (i = 0; i < a; i++)
    flin(m[i], a);
}

int main()
{
  int m[20][20], p1, p2, i, num;
  char c, s[20];
  float x, y;
  g = 0;
  printf("Digite o ultimo numero da sua matricula: ");
  scanf("%d", &num);
  printf("num = %d, g = %d\n", num, g);
  p1 = 1;
  p2 = 3;
  m[0][0] = 1;
  m[0][1] = 0;
  m[1][0] = 0;
  m[1][1] = 1;
  fpr(m, 2);
  printf("g = %d\n", g);
  i = fa(m, 2, num, &p1, p2);
  printf("%d %d %d %d\n", g, p1, p2, i);
  printf("%d %d\n", m[0][0], m[0][1]);
  printf("%d %d\n", m[0][0], m[0][1]);
  c = 'a' + num + 1;
  printf("%c\n", c);
  x = 5;
  p2 = 3;
  x = x/2;
  y = p2/2;
  printf("x = %3.1f, y = %3.1f\n", x, y);
  s[0] = 'a';
  s[1] = 'b';
  s[2] = 'c';
  s[3] = 'd';
  s[4] = 'e';
  s[5] = 'f';
  s[6] = '\0';
  printf("s = %s\n", s);
  s[2+num%3] = '\0';
  printf("s = %s\n", s);
  return 0;
}
