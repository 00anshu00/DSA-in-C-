#include <iostream>
using namespace std;

int main(){
   cout << "Enter a number: ";
   int n, sum = 0, count;
   cin >> n;
for (count = 0; count <= n; count += 2) {
    sum += count;
}
cout << sum << endl;
}
