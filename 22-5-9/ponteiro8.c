#include <stdio.h>

int main()
{
  float v[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
  int i;
  for (i=0; i<9; i++) printf("%.1f ", v[i]); /* 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 */
  printf("\n");
  for (i=0; i<9; i++) printf("%.1f ", *(v+i)); /* 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 */
  return (0);
}
