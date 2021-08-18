
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char  *argv[]) {
double n = 1 ;
while (n<128) {

double ln_n=log(n);
double n_ln_n = n* log(n);
double n2 = n * n;
printf("%2.f\t%2.f\t%2.f\t%2.f\n",n,ln_n,n_ln_n,n2 );
n=n*2;


}
return 0;
}
