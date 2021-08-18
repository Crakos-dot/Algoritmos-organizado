#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
  int a= atoi(argv[1]);
  int b= atoi(argv[2]);
bool rs=true;
  rs=(a % b== 0) || (b % a == 0);
  printf("%s\n", rs ? "verdadero " : "falso" );


  return 0;
}
