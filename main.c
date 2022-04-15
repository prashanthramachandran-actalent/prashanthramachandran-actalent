#include <stdio.h>
#include <math.h>

int main() {
  printf("Hello World\n");
  printf("Hello again\n");
  printf("Hello %d\n", 1+3);
  printf("Subraction %d\n", 2-3);
  printf("Mult %d\n", 3 * 2);
  printf("Subraction %d \n",24 - 42);
  printf("Division %2.1f\n", 3.0/2.0);
  printf("Exponent of 3 to base 2 is %.2lf\n",pow(2,3));
  printf("Subraction of the results %f\n",pow(2,3) - log(4.0));
  printf("Logarithm of 4  is %2.1f\n",log(4.0));
  printf("Add the values %f\n", log(4.0) + pow(2,3));
  printf("Sine wave with value 0.5 is %f\n",sin(0.5));
  printf("Cosine wave with value 0.5 is %f\n",cos(0.5));
  printf("tangent wave with value 0.5 is %f\n", tan(0.5));
  printf("The sum of all angles of a triangle is 180\n");
  printf("The sum of all angles of a quad is 360 degrees\n");
  printf("The hexagon is a nice shape\n");
  printf("The sepatagon is a nice shape\n");
  printf("The octagon is a nice shape with 8 sides\n");
  return 0;
}
