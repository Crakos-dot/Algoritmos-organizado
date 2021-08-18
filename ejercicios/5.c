#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {

int a=atoi(argv[1]);
int b=atoi(argv[2]);
srand(time(NULL));
int r=rand();
printf("r: %d\n",r );
r=(r%(b-a+1))+a;
printf("r %% b:%d\n",r );

  return 0;
}
