#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char const *argv[]) {

  int a= atoi(argv[1]);
  int i = 0;
  int r = 0;
    while (a>0) {
    r=a%10;
    a=a/10;

    i=i*10+r;
  }

  printf("el numero invertido es :%d\n",i );


  return 0;
}
