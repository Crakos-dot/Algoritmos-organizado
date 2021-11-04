#include <stdio.h>
#include <stdlib.h>

void array(){
  int numeros[2];
  int temp;
  for (int i = 0; i <2; i++) {
    numeros[i]=i;
  }
  temp=numeros[0]; //temp es igual a o
  numeros[0]=numeros[1];//0 cambia a 1
  numeros[1]=temp; //1 cambia a 0



    printf("%d %d ",numeros[0],numeros[1] );

  printf("\n" );
}
int main(int argc, char const *argv[]) {
  array();
  return 0;
}
