#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
  int x =  atoi(argv[1]);
  int y =  atoi(argv[2]);
  int x2=  atoi(argv[3]);
  int y2=  atoi(argv[4]);

  int r;
  r=x+x2;
  int r2;
  r2=y+y2;
  printf("%d\n",r );
  printf("%d\n",r2 );


  return 0;
}
