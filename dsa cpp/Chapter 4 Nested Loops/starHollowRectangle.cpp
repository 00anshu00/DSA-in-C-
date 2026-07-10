#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Rows: ";
    cin >> row;
    cout << "Cols: ";
    cin >> col;
    for(int i = 1; i <= row; i++) {
        if (i == 1 || i == row) {
            for (int j = 1; j <= col; j++) {
                cout << "* "; } }
        else {
            cout << "* ";
             for (int k = 2; k <= (col - 1); k++ ) {
                cout << "  ";
             }
             cout << "* "; }
            cout << endl; }
}