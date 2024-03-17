/*
CH230-A
a9_p4.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <algorithm>//this header is to include count

using namespace std;


int mycount(int x, int y){
  return y-x;
}
int mycount(char c, string s){
  int n = count(s.begin(), s.end(), c);
  return n;//count is used to determine the occurences of c char in a string
}

int main(){
int x = 7;
int y = 3;
char c = 'i';
string s = "This is a string";

cout << "Difference = " << mycount(x,y) << endl;//we print the first value
cout << "Occurences = " << mycount(c,s) << endl;//we print the second value
}
