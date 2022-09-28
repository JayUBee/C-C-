/*
CH-230-A
a3 p3.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

float convert(int cm){
float km;
  km = 0.0001 * cm;
  return km;
}

int main (){
  int cm;
  printf("Enter length in cm\n");
  scanf("%d", &cm);
  float km = convert(cm);
  printf("Result of conversion: %f\n", km);

  return 0;
  }
