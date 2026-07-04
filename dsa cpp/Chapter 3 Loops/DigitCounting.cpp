#include<iostream>
using namespace std;

int main(){
 float n, count = 0;
 cout << "Enter a number: ";
 cin >> n;
 for (int i = 10; n != 0; n = int(n / 10) ) {
 count+=1;
 }
 cout << count;
return 0;

}