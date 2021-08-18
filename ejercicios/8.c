#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
double x=atof(argv[1]);
double v=atof(argv[2]);
double t=atof(argv[3]);
double g=9.807;
double gt;
gt=((g*t)*(g*t)/2);
double r;
r=x+v+gt;
printf("%4.f\n",r );


  return 0;
}
