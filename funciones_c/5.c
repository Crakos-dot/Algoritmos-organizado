#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double raices(double a, double b, double c){
  double disc = (b * b)-(4 * a * c);
  double raiz = sqrt(disc);
  double r1 = ( - b + raiz) / (2 * a);
  double r2 = ( - b - raiz) / (2 * a) ;
  printf("r1:%.2f,r2:%.2f\n", r1 , r2);
  if (disc<=0) {
    printf("ERROR\n" );
  }
if (a==0) {
    printf("ERROR\n" );
}
}
int main(int argc, char const *argv[]) {
  double av=atoi(argv[1]);
  double ba=atoi(argv[2]);
  double ac=atoi(argv[3]);
  printf(" \n",raices(av,ba,ac) );
  return 0;
}
