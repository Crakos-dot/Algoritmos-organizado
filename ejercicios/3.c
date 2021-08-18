#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
  int a= atoi(argv[1]);
  int b= atoi(argv[2]);
  int c= atoi(argv[3]);

bool rs=true;
rs=(a>=(b+c)) && b>=(b+c) && c>=(a+b);


printf("%s\n",rs ?"Verdadero":"Falso");

  return 0;
}
