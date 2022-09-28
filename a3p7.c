/*
CH-230-A
a3 p7.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void print_form(int n, int m, char c){
  for (int i=0; i<n; i++){
    for(int j=0; j<m+i; j++){
      printf("%c", c);
    }
    printf("\n");
  }
}

int main(){
  int n,m;
  char c;
  scanf("%d", &n);
  scanf("%d", &m);
  getchar();
  scanf("%c", &c);


  print_form(n,m,c);

  return 0;
}
