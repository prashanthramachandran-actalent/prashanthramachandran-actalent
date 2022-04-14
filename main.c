#include <stdio.h>
#include <math.h>

int main() {
  printf("Hello World\n");
  printf("Hello %d\n", 1+3);
  printf("Subraction %d\n", 2-3);
  printf("Mult %d\n", 3 * 2);
  printf("Division %2.1f\n", 3.0/2.0);
  printf("Exponent of 3 to base 2 is %.2lf\n",pow(2,3));
  printf("Logarithm of 4  is %2.1f\n",log(4.0));
  return 0;
}
