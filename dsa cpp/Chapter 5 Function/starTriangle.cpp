#include<iostream>
using namespace std;
void starTriangle(int row){
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
        cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    int a, b, c;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter number: ";
    cin >> b;
    cout << "Enter number: ";
    cin >> c;
    starTriangle(a);
    starTriangle(b);
    starTriangle(c);
}