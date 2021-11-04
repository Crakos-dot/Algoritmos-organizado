#include <stdio.h>
#include <stdlib.h>


void a(char *nombre){
  printf("Hola %s\n",nombre );


}

int main(int argc, char  *argv[]) {

  a(argv[1]);

  return 0;
}
