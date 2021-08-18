#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {

int x =atoi(argv[1]);
int y =atoi(argv[2]);
int z =atoi(argv[3]);

int r;
r=(x<y)&&(y<z);
printf("%s\n",r ?"ascendente":"falso" );







  return 0;
}
