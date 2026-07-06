#include<iostream>
using namespace std;

int main(){
 int n, count = 0;
 cout << "Enter a number: ";
 cin >> n;
 for (; n != 0; n /= 10 ) {
 count+=1;
 }
 cout << count;
return 0;

}