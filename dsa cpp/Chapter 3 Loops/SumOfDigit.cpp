#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    while (n !=  0)
    {
    sum += n % 10;
    n /= 10;
    }
    if (sum > 0)
    cout << sum;
    else cout << -sum;
    
}