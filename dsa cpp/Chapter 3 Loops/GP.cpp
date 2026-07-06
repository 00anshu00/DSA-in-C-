#include<iostream>
using namespace std;

int main(){
 int a = 1, r = 2, n;
 cout << "Enter no of terms: ";
 cin >> n;
 for (int i = 1; i <= n; i++ ) {
    cout << a << " ";
    a *= r;
 }
}