/*
CH230-A
a13_p7.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
using namespace std;

class OwnException : public exception{
private:
    string str;
public:
string what(){
return "OwnException\n";
}
OwnException(string newstr){
    newstr = str;
}
};

void switcher(int a){
switch(a){
  case(1):
    throw('a');
  case(2):
    throw(12);
  case(3):
    throw(true);
  default:
    throw OwnException("Default case exception");
  }
}

int main() {
int n=0;
while(n<4){
    try{switcher(n);}
    catch(char& a){cerr<<"Caught in main "<<a<<endl;}
    catch(int& a){cerr<<"caught in main "<<a<<endl;}
    catch(bool& a){cerr<<"caught in main "<<(a? "true" : "false")<<endl;}
    catch(OwnException& a){cerr<<"caught in main "<<a.what()<<endl;}
    n++;
}
return 0;
}
