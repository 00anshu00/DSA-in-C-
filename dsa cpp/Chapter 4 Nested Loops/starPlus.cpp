// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     if (n % 2 == 1) {
//         for (int i = 1; i <= n; i++) {
//             if (i != ((n + 1) / 2) ) {
//                 for (int j = 1; j <= n; j++) {
//                     if (j != ((n + 1) / 2)) {
//                     cout << "  "; }
//                     else {cout << "* ";}  } }
//              else { for (int k = 1; k <= n; k++)
//                 cout << "* ";} 
//             cout << endl;}
//     }
//     else { cout << "Please Enter Odd Integer...";}
// }

#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int mid = n / 2 + 1;
    if (n % 2 == 1) {
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i == mid || j == mid) {
                    cout << "* "; }
                    else {cout << "  ";}  }
                cout << endl; }
        
} 
    else {cout << "Enter A Odd Integer....";} }