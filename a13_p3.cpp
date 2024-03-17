/*
CH230-A
a13_p3.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
int n;
cin>>n;
string name;
string str;
ifstream* files = new ifstream[n];
for (int i =0; i < n; i++){
    cout<<"enter file name ";
    cin>>name;
    files[i].open(name, ios::binary);
    if (!files[i].good()){
        cout<<"error getting file: "<<name<<endl;
        exit(1);
    }
}
ofstream out("concatn.txt", ios::binary);
for (int i = 0; i < n; i++){
    while (getline(files[i], str)){
        out<<str<<endl;
    }
    out<<endl;
}
delete [] files;
return 0;
}
