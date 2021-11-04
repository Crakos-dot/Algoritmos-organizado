#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int array[],int max,int a,int r){
  srand(time(NULL));
  for (int i = 0; i < a; i++) {
    r=rand();
    r=r%a;
    array[i]=r;
    printf("%d\n",array[i] );
    if (max<array[i]) {
      max=array[i];
    }
  }
  printf(" el maximo es de %d\n",max );
}

int main(int argc, char  *argv[]) {
  int ma=-9999;
  int size=atoi(argv[1]);
  int z[size];
  int t;
  max(z,ma,size,t);
  return 0;
}
