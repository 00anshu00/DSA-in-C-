#include<iostream>
using namespace std;

void vishnu() {
    cout << "Hello Vishnu\n";
}

void anshu() {
    cout << "Hello Anshu\n";
    vishnu();
}
void rahul() {
    cout << "Hello Rahul\n";
    anshu();
}

int main () {
    rahul();
}
