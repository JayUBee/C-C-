#include <stdio.h>
#include<stdlib.h>

int main(){
int x;
scanf("%d", &x);
if(x%2==0 && x%7==0){
  printf("this number is divisible by 2 and 7\n");
}
else {
  printf("this number is NOT divisible by 2 and 7\n");
}
return 0;
}
