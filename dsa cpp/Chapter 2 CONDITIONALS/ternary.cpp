#include<iostream>
using namespace std;

int main(){
    cout<<"Enter The Number: ";
    int x;
    cin>>x;
    // (x%2==0) ? cout<<"Even" : cout<<"Odd";
    cout<<((x%2==0) ? "Even" : "Odd");

}