#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(int argc, char  *argv[]) {
  int a= atoi(argv[1]);
  int b= atoi(argv[2]);
  int c= atoi(argv[3]);


  double disc = (b * b)-(4 * a * c);
  double raiz = sqrt(disc);
  printf("disc:%.2f,raiz:%.2f\n", disc, raiz);
  double r1 = ( - b + raiz) / (2 * a);
  double r2 = ( - b - raiz) / (2 * a) ;
  printf("r1:%.2f,r2:%.2f\n", r1 , r2);

  if (disc<=0) {
    printf("ERROR" );
  }
if (a==0) {
    printf("ERROR" );
}


  return 0;
}
