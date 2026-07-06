#include<iostream>
using namespace std;

int main(){
int n, x;
cout << "Enter a number: ";
cin >> n;
for (int i = 1; i != n; i+=1) {
    if ( n % i == 0) {
        x = i;
    }
}
cout << x << endl;
return 0;

}