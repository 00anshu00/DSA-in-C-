#include<iostream>
using namespace std;

int main(){
int sum = 0, n;
cout << "Enter A Number: ";
cin >> n;
for (int i = 1; i <= n; i++) {
    sum += i;
}
cout << "Sum = " << sum << endl;

return 0;

}