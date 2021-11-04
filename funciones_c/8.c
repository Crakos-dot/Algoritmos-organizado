#include <stdio.h>
#include <stdlib.h>

int cont(char *palabra,int i){


   while (palabra[i]>i) {

     i++;

 }
printf("%d\n",i );
}
int main(int argc, char *argv[]) {
  int a=0;

  cont(argv[1],a);
    return 0;
}
