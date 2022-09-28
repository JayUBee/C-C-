/*
Tayyab butt
a2_p4
t.butt@jacobs-university.de
*/

#include <stdio.h>

int main(){

float a,b,h;


scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&h);

float ans1,ans2,ans3,ans4;

ans1=a*a;
ans2=a*b;
ans3=0.5*a*h;
ans4=0.5*(a+b)*h;

printf("sqaure area=%f\n",ans1);
printf("rectangle area=%f\n",ans2);
printf("triangle area=%f\n",ans3);
printf("trapezoid area=%f\n",ans4);

}
