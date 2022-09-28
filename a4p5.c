/*
CH-230-A
a3 p5.c
Tayyab Butt
tbutt@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count_consonants(char str[]){
    int c=0,i;
    char *p;
    for ( i=0;*(p+i)!='\n';i++){
        p = str;
        if((*(p+i)>='A' && *(p+i)<='Z')||(*(p+i)>='a' && *(p+i)<='z'))
            {
                c++;
        }
        if(*(p+i)=='A' || *(p+i)=='E' || *(p+i)=='Y' ||*(p+i)=='U' ||*(p+i)=='I' ||*(p+i)=='O' ||
            *(p+i)=='a' || *(p+i)=='e' || *(p+i)=='y' ||*(p+i)=='u' || *(p+i)=='i' ||*(p+i)=='o')
            {c--;}
        }
    return c;
}
int main(){
  char string[100];
  int i=0;
  int arr[100];
  while(string[0] != '\n'){
        fgets(string, sizeof(string), stdin);
        arr[i]=count_consonants(string);
        i++;
  }
  for(int j=0; j<i-1 ; j++){
  printf("Number of consonants=%d\n",arr[j]);
}
  return 0;
}
