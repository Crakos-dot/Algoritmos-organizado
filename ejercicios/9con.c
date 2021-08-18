#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {
printf("%d\n",argc );
int max =-999999;

for (int i = 0; i < argc; i++) {
int n=atoi(argv[i]);
if (n>max) {
  max=n;
}
}
printf("el maximo es %d\n",max );



  return 0;
}
