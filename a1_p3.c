#include <stdio.h>

int main() {
float result; /* The result of the division */
int a = 5;
double b = 13.5;
/*the data type for variable b was int whereas it should be
double as its value is 13.5*/
result = a / b;
printf("The result is %lf\n", result);
return 0;
}
