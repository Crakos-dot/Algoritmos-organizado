#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

  int a= atoi(argv[1]);
  int b= atoi(argv[2]);

if (a>0 && b>0) {
  printf("Esta en el cuadrante I\t" );
}
if (a<0 && b>0) {
  printf("Esta en el cuadrante I I\t" );
}
if (a<0 && b<0) {
  printf("Esta en el cuadrante I I I\t" );
}
if (a>0 && b<0) {
  printf("Esta en el cuadrante IV\t" );
}
  return 0;
}
