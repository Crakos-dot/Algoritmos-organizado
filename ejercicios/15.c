#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  int x=atoi(argv[1]);
  int y=atoi(argv[2]);
  int z=atoi(argv[3]);
  int a=atoi(argv[4]);
  int v=atoi(argv[5]);
  int c=atoi(argv[6]);
  int r;
  int k;
  int u;
  r=(y*c)-(z*v);
  k=(z*a)-(x*c);
  u=(x*v)-(y*a);




  printf("%d",r);
  printf("%d",k);
  printf("%d",u);


  return 0;
}
