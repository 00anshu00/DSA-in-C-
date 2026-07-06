#include<iostream>
using namespace std;

int main(){
    cout<<"Enter The Numbers...\n";
    int n1, n2, n3;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    if(n1>n2){
    if(n1>n3) {cout<<n1<<" Is Greatest";}
    else {cout<<n3<<" Is Greatest";}
    }
    else{if(n2>n3) cout<<n2<<" Is Greatest";
    else cout<<n3<<" Is Greatest"; }
}