#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(int argc, char const *argv[]) {

  srand(time(NULL));
  int r=rand();

 r = r % 8 + 1;
 if (r<6) {
printf("%d\n", r);
 }
 else{
 printf("6\n");
 }
  return 0;
}
