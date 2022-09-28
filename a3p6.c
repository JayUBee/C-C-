/*
CH-230-A
a3 p6.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

float to_pounds(int kg, int g){
  float sum;

 sum = 2.2*kg + 2.2*0.001*g;

  return sum;
}

int main(){
  int kg, g;
  scanf("%d", &kg);
  scanf("%d", &g);


  printf("Result of conversion: %f\n", to_pounds(kg,g));
return 0;
}
