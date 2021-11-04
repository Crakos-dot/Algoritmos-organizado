#include <stdlib.h>
#include <stdio.h>


 int pepe(int a){

  int array[a];
  for (int i = 0; i < a; i++) {
    array[i]=i;
    printf("%d ",array[i] );
  }
  printf("\n" );
}

int main(int argc, char  *argv[]) {
  int x=atoi(argv[1]);
  pepe(x);
  return 0;
}
