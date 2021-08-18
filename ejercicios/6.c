#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {




  int a=1;
  int b=6;
  srand(time(NULL));
  int r=rand();
  int q=rand();
  r=(r%(b-a+1)+a);
  q=(r%(b-a+1)+a);
printf("%d\n",r );
printf("%d\n",q );


  return 0;
}
