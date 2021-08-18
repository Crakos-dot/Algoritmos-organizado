#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
  / code */
  double xi = atoi (argv[1]);
  double vi = atoi (argv[2]);
  double t  = atoi (argv[3]);
  double z  =pow(t,2);
  printf("%f\n", (xi + (vi * t) + (9.8 * z)) / 2 );

  return 0;
}
