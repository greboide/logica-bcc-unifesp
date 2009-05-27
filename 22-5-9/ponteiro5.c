#include <stdio.h>

int main(int argc, char *argv[])
{
  int x,*px,a;
  x=1;
  px=&x;
  printf("x= %d\n",x);
  printf("px=%p\n",px);
  printf("*px+1= %d\n",*px+1);
  printf("px=%p\n",px);
  printf("*px= %d\n",*px);
  printf("*px+=1= %d\n",*px+=1);
  printf("px=%p\n",px);
  printf("(*px)++= %d\n",(*px)++);
  printf("*px= %d\n",*px);
  printf("px=%p\n",px);
  printf("*(px++)= %d\n",*(px++));
  printf("*px= %d\n",*px);
  printf("px=%p\n",px);
  for(a=0;a<10;a++){
    printf("\n%d",a);
  }
}
