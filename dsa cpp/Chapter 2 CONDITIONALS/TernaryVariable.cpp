#include<iostream>
using namespace std;

int main() {


    int x = 6;
    int y = (x>12) ? x-4 : x*4 ;
    cout<<y;


    int a = 6;
    int b = (a++ > 12) ? a-4 : a*4 ;
    cout<<b;
}