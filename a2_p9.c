#include <stdio.h>
#include <stdlib.h>

int main(){
  char str;
  scanf("%c", &str);
  getchar();

  if((int)str>47 && (int)str<58){
    printf("%c is a digit\n", str);
  }
  else if((int)str>64 && (int)str<91){
    printf("%c is a capital letter\n", str);
  }
  else if((int)str>96 && (int)str<123){
    printf("%c is a lowecase letter\n", str);
  }
  else {
    printf("%c is a symbol\n", str);
  }
  return 0;
}
