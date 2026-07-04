#include<iostream>
using namespace std;

int main(){
  float length, breadth, area, perimeter;
  cout<<"Enter Length Of Rectangle: ";
  cin>>length;
  cout<<"Enter Breadth Of Rectangle: ";
  cin>>breadth;
  cout<<endl;
   area = length * breadth;
  perimeter = 2 * (length + breadth);
  cout<<"Area: "<<area<<endl;
  cout<<"Perimeter: "<<perimeter<<endl;
}