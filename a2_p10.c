#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int i;
  scanf("%d", &n);
  printf("1 day = 24 hours\n");
i = 2;
while(i<=n){
  printf("%d days = %d hours\n", i, i*24);
  i++;
}
return 0;
}
