#include <stdio.h>
int main() {
double result; // The result of our calculation
result = (double)(3 + 1) / 5;
//to make sure the proper value is returned,
//we have to make sure the result will be a double.
//otherwise the program will return an integer.
printf("The value of 4/5 is %lf\n", result);
return 0;
}
