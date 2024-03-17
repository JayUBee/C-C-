/*
CH230-A
a13_p6.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> vector0(20, 8);
for (int x : vector0){
    cout<<x<<" ";
}
try {
    cout<<vector0.at(20);
} catch (out_of_range& a) {
    cerr<< a.what()<<endl;
}
return 0;
}
