#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, sum, prod, diff;
  double div;
  int rem;
    x = 17;
    y = 4;
printf("%d\n", x);
printf("%d\n", y);

sum = x + y;
  printf("sum = %d\n", sum);
prod = x*y;
  printf("product = %d\n", prod);
diff = x - y;
  printf("difference = %d\n", diff);
div = (double)x/(double)y;
  printf("ratio = %.2lf\n", div);
  rem = x % y;
  printf("remainder = %d\n", rem);



    return 0;
}
