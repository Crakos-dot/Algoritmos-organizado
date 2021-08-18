#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char  *argv[]) {

  int a=atoi(argv[1]);
  int b=atoi(argv[2]);

  (a = a + b);
  (b = a - b);
  (a = a - b);


printf("%d;%d\n",a,b);





  return 0;
}
