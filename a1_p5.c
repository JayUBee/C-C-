#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;
  float y;
  char z;
  double u;

    x = 2138;
    y = -52.358925;
    z = 'G';
    u = 61.295339687;

    printf("x = %9d\n", x);
    printf("y = %11.5f\n", y);
    printf("z = %c\n", z);
    printf("u = %.7lf\n", u);

    return 0;
}
