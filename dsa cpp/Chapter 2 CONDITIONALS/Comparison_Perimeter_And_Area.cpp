#include<iostream>
using namespace std;

int main(){
    float length, breadth, area, perimeter;
    cout<<"Comparing Area And Perimeter"<<endl<<"\n";
    cout<<"Enter Length Of Your Rectangle: ";
    cin>>length;
     cout<<"Enter Breadth Of Your Rectangle: ";
    cin>>breadth;
    area = length * breadth;
    perimeter  = 2 *(length+breadth);
    cout<<"Area Of The Rectangle Is "<<area<<"\n";
    cout<<"Perimeter Of The Rectangle Is "<<perimeter<<"\n";
    if(area>perimeter) {
        cout<<"Area Is Greater Than The Perimeter."<<"\n";
    }
    if(area==perimeter) {
      cout<<"Area Is Equal To The Perimeter."<<"\n"; 
    }
    if(area<perimeter) {
        cout<<"Area Is Lesser Than The Perimeter."<<"\n"; 
    }
}