#include <stdio.h>
#include <math.h>

int primop(int num){
  int i;
  for (i = 2; i <= sqrt(num); i++)
    {
      if ((num%i)==0)
        return 0;
    }
  return 1;
}

int main(int argc, char *argv[])
{
  int i,num;
  num=2;
  printf("ola\n%d",primop(num));
  for (i = 0; i < 100; i)
  {
    if (primop(num)) {
      printf("Nossa heuristica determinou mais um número primo %d.\n",num);
      i += 1;
      num += 1;
    }
    else
      num += 1;
  }
  return 0;
}


