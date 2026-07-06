#include<iostream>
using namespace std;

int main(){
   float a,b,c;
   cout<<"Enter Sides Of Triangle\n";
   cin>>a;
   cin>>b;
   cin>>c;
   if((a+b)>c && (b+c)>a && (c+a)>b){
    cout<<"Triangle Is Possible"  ;
   }
   else {
    cout<<"Triangle Not  Possible";
   }
}