#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
int a=atoi(argv[1]);
for (int i=0 ; i < a ; i++) {
 for (int j=0; j <a; j++) {
if ((i+j)%2==0) {
  printf("N");
}
else{
printf("B");

}
  }
  printf("\n" );
}





  return 0;
}
