#include<iostream>
using namespace std;

int main(){
    int no, fact = 1;
cout << "Enter A Number: ";
cin >> no;
cout << "Factorial Of " << no <<": ";
for(int i = 1; i <= no; i++) {
    fact *= i;
}
cout << fact;
return 0;

}