/*
CH-230-A
a3 p8.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include<stdio.h>
#include <stdlib.h>

float sum(float list[], int j){
  int i;
  float sum;
  for(i=0; i<j; i++){

  sum = sum + list[i];
}
return sum;
}

float average(float list[], int j){
  float average;
  float sum;
  for(int i=0; i<j; i++){
    sum = sum + list[i];
  }
  average = sum/j;

  return average;
}

int main(){
  float list[10];

  for(int i=0; i<10; i++)
{
scanf("%f", &list[i]);
//the loop only occurs in the end
//of the line or if we type -99
if (list[i]== -99 || list[i]== '\0')
    {
        printf("The sum of the values= %f\n", sum(list, i));
        printf("The average of the values= %f\n", average(list, i));
        break;
    }
}

return 0;
}
