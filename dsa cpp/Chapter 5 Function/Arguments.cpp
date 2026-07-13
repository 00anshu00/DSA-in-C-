#include<iostream>
using namespace std;
void minOfTwo(int a, int b) {
    if(a > b) cout << b << " Is Smaller\n";
    else cout << a << " Is Smaller\n";
}

int main(){
    int a, b;
    cin >> a >> b;
    minOfTwo(a, b);
}