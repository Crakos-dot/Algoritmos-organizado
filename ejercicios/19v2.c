#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int guita = atoi(argv[1]);

  // de 1000
  printf("1000: %d\n", guita / 1000);
  guita = guita % 1000;
  // de 500
  printf("500: %d\n", guita / 500);
  guita = guita % 500;
  // de 200
  printf("200: %d\n", guita / 200);
  guita = guita % 200;
  // de 100
  printf("100: %d\n", guita / 100);
  guita = guita % 100;

  // de 50
  printf("50: %d\n", guita / 50);
  guita = guita % 50;
  // de 20
  printf("20: %d\n", guita / 20);
  guita = guita % 20;

  // de 10
  printf("10: %d\n", guita / 10);
  guita = guita % 10;
  return 0;
}
