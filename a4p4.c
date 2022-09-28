/*
CH-230-A
a4_p4.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count_consonants(char str[100]){
    int c=0,i;
    for ( i=0;str[i]!='\n';i++){
        char b =  str[i];
        if((b>='A' && b<='Z') || (b>='a' && b<='z')){
                c++;
        }
        if(b=='A' || b=='E' || b=='Y' ||b=='U' || b=='I' || b=='O'||
            b=='a' || b=='e' || b=='y' ||b=='u' || b=='i' || b=='o'){
            c--;}

        else if(str[i]=='\n'){
            break;
        }
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
