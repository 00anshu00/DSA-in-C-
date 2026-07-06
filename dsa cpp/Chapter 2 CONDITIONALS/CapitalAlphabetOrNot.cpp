#include<iostream>
using namespace std;

int main(){
cout<<"Enter Your Alphabet Letter: ";
char letter;
cin>>letter;
int ASCII;
ASCII = int(letter);
if (ASCII>=65 && ASCII<=90) {
    cout<<"Capital Letter";
}
    else { cout<<"Not Capital";
}

}