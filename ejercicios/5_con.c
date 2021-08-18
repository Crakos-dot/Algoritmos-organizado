#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {

  int contador=1000;
  int salto=5;
  int ns=0;
  while (contador<=1999) {

  printf("%d ...",contador );

  contador++;
  if (contador%salto==0) {
    printf(" \n",ns );
    ns++;
  }

  }

  return 0;
}
