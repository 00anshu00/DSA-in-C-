#include<iostream>
using namespace std;

int main() {
    int rev = 0, n, ld;
    cout << "Enter a Number: ";
    cin >> n;
    while (n != 0) {
        ld = n % 10;
        n /= 10;
       rev = rev * 10 + ld; 
      
    }
    cout << rev;
}