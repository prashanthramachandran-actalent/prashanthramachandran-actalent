#include <stdio.h>

int main() {
  printf("Hello World\n");
  printf("Hello %d\n", 1+3);
  printf("Mult %d\n", 3 * 2);
  printf("Division %2.1f\n", 3.0/2.0);
  printf("Division with 0 in the denominator %d\n", 4/0);
  return 0;
}
