#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {

 double x  = atoi(argv[1]);
 double y  = atoi(argv[2]);

 double r  = atan2(y,x);
 double rs = rs * 180 /3.14;

 printf("El\t angulo\t (%d,%d)\n",r );
 printf("El\t Segundo\t dato\t es\t %2.f",rs );



printf("%d\n",r );

  return 0;
}
