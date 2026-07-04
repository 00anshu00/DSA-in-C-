#include<iostream>
using namespace std;

int main(){
cout<<"Enter Your Number: ";
int x;
cin>>x;
if(x%3==0 || x%5==0){
    cout<<"Divisible";
}
else {
    cout<<"Not Divisible";
}

}