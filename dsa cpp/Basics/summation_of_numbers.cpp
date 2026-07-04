#include<iostream>
using namespace std;

int main(){
   float number1, number2, sum, diff, prod,aver;
    cout<<"Enter 1st Number: ";
   cin>>number1;
      cout<<"Enter 2nd Number: ";
       cin>>number2;
       cout<<endl;
       sum = number1 + number2;
       diff = number1 - number2;
       prod = number1 * number2;
       aver = (number1 + number2) / 2;
       cout<<"Summation Of Number Is: "<<sum<<endl;
          cout<<"Difference Of Number Is: "<<diff<<endl;
          cout<<"Product Of Number Is: "<<prod<<endl;
            cout<<"Average Of Number Is: "<<aver<<endl;   
        
}