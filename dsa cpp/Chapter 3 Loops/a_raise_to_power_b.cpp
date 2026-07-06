#include<iostream>
using namespace std;

int  main(){
    int a, b, c;
    cout << "Enter Base: ";
    cin>>a;
    cout << "Enter Exponent: ";
    cin>>b;
    c = a;
    for (int i = 2; i <= b; i++) {
        a *= c;
    }
    cout << "power is: " << a << endl;
}