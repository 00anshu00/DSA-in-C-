#include<iostream>
using namespace std;

int main(){
 int n, a=1;
 cout << "Enter no of terms: ";
 cin >> n;
 for (int i = 1; i <= n; i++) {
    cout << a << endl << n << endl;
    a += 1;
    n -= 1;

 }
}