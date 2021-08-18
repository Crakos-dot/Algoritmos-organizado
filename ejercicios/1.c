#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char  *argv[]) {
  int a= atof(argv[1]);
  int b= atof(argv[2]);

  int r=cos(b)+ sin(b);
  printf("%0.f\n",r );

  return 0;
}
