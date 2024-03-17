/*
CH230-A
a9_p5.cpp
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;


 int rando (){ //for random number
     int die;
     int count = 0;
     int randomNumber;

     srand( static_cast < unsigned int >( time(0)));
     while( count < 10) {
       count ++;
       randomNumber = rand () ;
       die = ( randomNumber % 100) + 1;
     }
     return die;
   }
   int main(){
     string s;
     int n;
     int count = 0;
     cout << "Please enter name: " << endl;
     getline(cin, s);
     int r=rando();
     cout<<" Please guess: " << endl;
       while (1){
         count ++;
         cin>>n;
         if (n<r){
           cout<<"Too low!"<<endl; // prints too low if guess n is lower than random number r
         }
         else if (n>r){
           cout<<"You're too high!"<<endl; // prints too high if n is greater than r
         }
         else { //if the right number is guessed
           cout<<" Bravo! "<<s<<" You got it in "<<count<<" tries "<<endl;
           cout<<"You're a batal"<<endl;

         }

       }
       return 0;
   }
