#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int i = 1;
  int f = 1;

  int z=atoi(argv[1]);
  int x=atoi(argv[2]);
  for ( i ; i <= z ; i++) {

    f=f*i;


  }


printf("El\t resultado\t es\t %d\n",f );



  return 0;
}
