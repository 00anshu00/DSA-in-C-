#include<iostream>
using namespace std;

int main(){
   float a,b,c;
   cout<<" Enter The Numbers\n";
   cin>>a;
   cin>>b;
   cin>>c;
   cout<<"\n";
   if(a>b && a>c) {
    cout<<a<<" is greatest";
   }
   else if(b>a && b>c) {
    cout<<b<<" is greatest";
   }
   else {
     cout<<c<<" is greatest";
   }
}