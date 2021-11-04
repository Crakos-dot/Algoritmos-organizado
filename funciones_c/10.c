#include <stdio.h>
#include <stdlib.h>

int cambiar(int a , int b ){
  int temp;
  temp =a;    //0 y 1 , temp es 0 a es 0 y b es 1
  a=b;
  b=temp;
  printf("%d %d\n",a,b );
}
int main(int argc, char const *argv[]) {
  int x=atoi(argv[1]);
  int y=atoi(argv[2]);
  cambiar(x,y);

  return 0;
}
