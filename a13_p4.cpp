/*
CH230-A
a13_p4.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B()  { setX(10); }
};

class C: virtual public A
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    return 0;
}
//there is x value for class B and class C
//and the d.print() function does not know which one to print.
//adding virtual to the class inheritance makes sure that
//this problem does not occur.
