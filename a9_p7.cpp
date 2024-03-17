/*
CH230-A
a9_p7.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
using namespace std;

void swapping(int &a, int &b){ // swap ints

  int c=a;      //c is a temporary int
  a=b;          //which stores the value of a
  b=c;
}

void swapping(float &x, float &y){ // swap floats

  float z=x;    //z is a temporary float
  x=y;          // which stores the value of x
  y=z;
}

void swapping(const char * &str1, const char * &str2){ // swap char pointers

  const char *temp=str1;    //temp is a temporary char
  str1=str2;                //which stores the value of str1;
  str2=temp;
}

int main(void){
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}
