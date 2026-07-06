#include<iostream>
using namespace std;

int main(){
  float cp, sp;
  cout<<"Enter The Cost Price: ";
  cin>>cp;
  cout<<"Enter The Selling Price: ";
 cin>>sp;
 if(sp-cp>0) {
    cout<<"Profit"<<endl;
    cout<<"Profit Of $"<<sp-cp<<endl;
 }
if(sp-cp==0)  {
    cout<<"No Profit"<<endl;}
    if(sp-cp<0) {
        cout<<"Loss"<<endl;
        cout<<"Loss of $"<<cp-sp<<endl;
    }
}
