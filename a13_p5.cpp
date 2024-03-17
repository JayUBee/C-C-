/*
CH230-A
a13_p5.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A
{
public:
  C():A(10) {  }
};

class D: public B, public C {
  public:
  D():A(10),B(),C(){}

};

int main()
{
    D d;
    d.print();
    return 0;
}
//the main function calls for an instance in class D
//But class D did not have a constructor to construct an instance, so we writea constructor in D.
