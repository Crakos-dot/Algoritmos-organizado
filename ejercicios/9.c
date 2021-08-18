#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char  *argv[]) {
 int d=atoi(argv[1]);
 int m=atoi(argv[2]);

 bool r1;

 r1= (d>=20)&&(d<=31) && (m<=6)&&(m>=3);

printf("%s\n",r1 ?"verdadero":"falso" );


  return 0;
}
