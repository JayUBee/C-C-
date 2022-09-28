/*
  Tayyab Butt
  a2_p3
  t.butt@jacobs-university.de
  */


#include <stdio.h>


int main(){

int weeks,days,hours;

  printf("Enter weeks\n");
 scanf("%d",&weeks);

  printf("Enter days\n");
 scanf("%d",&days);

  printf("Enter hours\n");
 scanf("%d",&hours);

int total;

total= ((weeks*168)+(days*24)+(hours));
  printf("Total hours=%d\n",total);


}
