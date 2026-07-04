#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n, count = 0;
cout << "Enter a number: ";
cin >> n;
// for (int i = 1; i <= n; i++) {
//     if ( n % i == 0) {
//         count++;
//         if (count > 3) break;
//     } }
//     if ( count == 2) {
//         cout << "Prime " << endl;
//     }
//      else if ( count == 1) {
//         cout << "Neither Prime Nor Composite " << endl;
//      }
//     else cout << "Composite " << endl;
bool flag = false; // false means prime.
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {flag  = true;
        break;}
    }
    if (flag == true) { cout << "Composite number";}
    if (flag == false) { cout << "Prime number";}
}