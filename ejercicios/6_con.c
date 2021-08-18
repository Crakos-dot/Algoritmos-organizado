#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main(int argc, char  *argv[]) {
  int n = atoi(argv[1]);
  srand(time(NULL));


  int promedio=0;

 for ( int i = 1; i <= n; i++) {
   int num=rand();
  num=(1+rand()%(101-1)) ;
  printf("%d\n",num );
  promedio=promedio+num;
 }


printf("el promedio es de %d\n",promedio/n );






























  return 0;
}
