#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {
printf("%d\n",argc );
int min =999999;

for (int i = 0; i < argc; i++) {
int n=atoi(argv[i]);
if (n<min) {
  min=n;
}
}
printf("el maximo es %d\n",min );



  return 0;
}
