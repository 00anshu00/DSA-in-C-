#include<iostream>
using namespace std;

int main(){
    int side;
    cout << "Side: ";
    cin >> side;
    for(int i = 1; i <= side; i++) {
        if (i % 2 == 1) {
        for(int j = 1; j <= side; j++) {
            cout << (char)(i+96) << " ";
        } }
        else {
             for(int j = 1; j <= side; j++) {
            cout << (char)(i+64) << " ";
        } }
        cout << endl;
}
}