/*
CH-230-A
a3 p5.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  char c;
  int n;
  double sum=0;

  printf("enter c: ");
  scanf("%c", &c);
  printf("enter n: ");
  scanf("%d", &n);
  double arr[100];

  for(int i=0; i<n; i++){
    printf("enter temperature %d: ", i+1);
    scanf("%lf", &arr[i]);
  }
  switch (c) {
    case 's':
  for (int i=0; i<n; i++) {
    sum=sum + arr[i];
  }
  printf("sum of temperatures: %lf\n", sum);
  break;
    case 'p':
    for(int i=0; i<n; i++){
      printf("temperature %d is: %lf\n", i+1, arr[i]);
    }

    case 't':
    for(int i=0; i<n; i++){

    printf("temperature %d in fahrenheit is: %lf\n", i+1, (arr[i]*9/5)+32);

    }
    default:
    for(int i=0; i<n; i++)
    {
    sum = sum + arr[i];
    }
    printf("the mean of the temperatures is: %lf\n", sum/n);
    break;
  }
  return 0;
}
