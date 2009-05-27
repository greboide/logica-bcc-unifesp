#include <stdio.h>

main()
{
  int vetor[] = { 101, 202, 303, 404, 505 };
  int *p1;
  p1 = &vetor[2];
  printf("%d\n", *p1);          /* 303 */
  p1++;
  printf("%d\n", *p1);          /* 404 */
  p1 = p1 + 1;
  printf("%d\n", *p1);          /* 505 */
}
