#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


int main(int argc, char const *argv[]) {
   int i = 1 ;
   int n = atoi(argv[1]);
while (i<=100) {


i++;
if (i % n ==3) {
  printf("%d\n",i );
}
}


  return 0;
}
