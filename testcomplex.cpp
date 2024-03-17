/*
CH230-A
a13_p2.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
#include <fstream>
using namespace std;

int main(){
  ifstream str1("in1.txt");
  if(!str1.good()){
  cout<<"error getting File";
  exit(1);
  }
  ifstream str2("in2.txt");
  if(!str2.good()){
    cout<<"error opening File";
    exit(1);
  }
  Complex c1, c2, res;
  str1 >> c1;
  str2 >> c2;
    cout<<c1<<endl;
    cout<<c2<<endl;
   ofstream out;
    out.open("output.txt");
    cout << "What's on the file: "<<endl;
    cout<<c1+c2<<endl;
    out << c1 + c2<<endl;
    cout<<c1 - c2<<endl;
    out << c1 - c2<<endl;
    cout<<c1 * c2<<endl;
    out << c1 * c2<<endl;
    out.close();
    return 0;
}
