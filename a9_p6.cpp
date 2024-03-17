/*
CH230-A
a9_p6.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
using namespace std;

int myfirst(int c[], int n){

  int i;
  for(i=0; i<n; i++){
    if(c[i]>0 && c[i]%2==0){ //to determine if the int is positive and even
      return c[i];   //returns the value of element if statement if true
      break;
    }
  }
    return -1;  //returns -1 in other case
}

double myfirst(double c[], int n){

  int i;
  for(i=0; i<n; i++){
    if(c[i]<0 && c[i]== (int) c[i]){ // determines if int is negative and non fractional
      return c[i];   // returns the value of element if statement is true
      break;
    }
  }
  return -1.1;  // returns -1.1 in other case
}



char myfirst(char c[]){
    for(int i=0;c[i]!='\0';i++){//to determine and returns consonants
        if((('a'<=c[i])&&(c[i]>='z'))||(('A'<=c[i])&&(c[i]>='Z'))){

           if((c[i]!='a') && (c[i]!='e') && (c[i]!='o') && (c[i]!='i') && (c[i]!='u')
              &&(c[i]!='A') && (c[i]!='E') && (c[i]!='O') && (c[i]!='I') && (c[i]!='U')){
                    return  c[i];
            }
        }
    }
    return '0';     //returns char 0 in other case
}

int main(){
  int arr11[5] = {1, 5, -3, 6, 1235};
  int arr12[5] = {-2, 45, 33, 87, -69};
  double arr21[5] = {1.03, 5.69, -3.80, -120.00, 200.50};
  double arr22[5] = {2.07, -3.30, -5.89, 100.00, 69.420};
  char arr31[] = {"aeieubot"};
  char arr32[] = {"AEIOUOOui"};

  cout<<myfirst(arr11, 5)<<endl;
  cout<<myfirst(arr12, 5)<<endl;
  cout<<myfirst(arr21, 5)<<endl;
  cout<<myfirst(arr22, 5)<<endl;
  cout<<myfirst(arr31)<<endl;
  cout<<myfirst(arr32)<<endl;




  return 0;
}
