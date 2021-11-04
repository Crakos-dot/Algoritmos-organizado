#include <stdio.h>
#include <stdlib.h>

int is_triangle(int a , int b , int c){
  if (a<b+c &&b<a+c && c<b+a) {
    return 1;
  }
  else{
    return 0;
  }

}
int main(int argc, char const *argv[]) {
  int la=atoi(argv[1]);
  int lb=atoi(argv[2]);
  int lc=atoi(argv[3]);
  printf("%d\n",is_triangle(la,lb,lc) );


  return 0;
}
