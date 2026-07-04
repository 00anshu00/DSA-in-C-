#include<iostream>
using namespace std;

int main(){
  cout<<"Enter Your Number: ";
  float no;
  cin>>no;
  if (no==int(no)) {
    cout<<"Integer";
  }
else {
    cout<<"Not Integer";
}
}
 