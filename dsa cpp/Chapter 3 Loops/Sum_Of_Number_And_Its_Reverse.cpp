#include<iostream>
using namespace std;

int main() {
    int rev = 0, n, ld, nn;
    cout << "Enter a Number: ";
    cin >> n;
    nn = n;
    while (n != 0) {
        ld = n % 10;
        n /= 10;
       rev = rev * 10 + ld; 
      
    }
    cout << "Reverse Of The Number Is: " << rev << endl;
    cout << "Sum Of Number And Its Reverse Is: " << nn + rev << endl;
}