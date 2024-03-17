/*
CH230-A
a13_p8.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

class Motor {
public:
  Motor(){throw "This motor's got a problem";}
};

class Car {
public:
  Car() {
    try {Motor m;}
    catch (const char* err) {
      cerr << err << endl;
      throw "The car in this garage has a problem with the motor";
    }
  }
};

class Garage {
  public:
    Garage() {
      try {
        Car c;
      }
      catch (const char* err) {
        throw err;
      }
    }
};


int main() {
  try {
    Garage g;
  }
  catch (const char* err) {
    cerr << err << endl;
  }
  return 0;
}
