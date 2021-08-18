#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char  *argv[]) {

 int a=atoi(argv[1]);
 int min=0;
 int max=99;
 srand(time(NULL));
 int r=rand();
 bool z;
 r=(r%(min-max+1)+min);
 z=(r==a);




printf("%s\n",z?"Ganaste":"Perdiste");






  return 0;
}
