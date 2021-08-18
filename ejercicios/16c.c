#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


int main(int argc, char  *argv[]) {

   int n =atoi(argv[1]);
   int i = 1;
   int z = 1;

   while (i<=n) {
    printf("%d\t",i*i );
    i++;
   }

   printf("\n" );
  for ( z ; z <= n; z++) {
    printf("%d\t",z );
  }






  return 0;
}
