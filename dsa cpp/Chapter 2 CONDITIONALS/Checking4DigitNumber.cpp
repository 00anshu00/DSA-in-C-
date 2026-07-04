#include<iostream>
#include<climits>
using namespace std;

int main(){
   cout<<"Enter Your Number: ";
   int no;
   cin>>no;
   if(no>999 && no<=9999) {
    cout<<"4 Digit Nummber.";
   }
    else {
        cout<<"Not 4 Digit Number.";
    }
}