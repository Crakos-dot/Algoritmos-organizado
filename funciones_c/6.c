#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int ran(int a,int b,int r){
srand(time(NULL));
 r=rand();
 r=(r%(b-a+1))+a;

printf("%d %d %d\n",a,b,r );
}
int main(int argc, char const *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int z;
  printf("\n",ran(a,b,z) );
  return 0;
}
