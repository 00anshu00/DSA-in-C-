#include<iostream>
using namespace std;

int main(){
  float marks1, marks2, marks3, total, average;
  cout<<"Enter Maths Marks: ";
  cin>>marks1;
  cout<<"Enter Physics Marks: ";
  cin>>marks2;
  cout<<"Enter Physics Marks: ";
  cin>>marks3;
  cout<<endl;


  total = marks1 + marks2 + marks3;
  average = total / 3;


  cout<<"Total Marks: "<<total;
  cout<<endl;
  cout<<"Average Marks: "<<average;
  return 0;
}