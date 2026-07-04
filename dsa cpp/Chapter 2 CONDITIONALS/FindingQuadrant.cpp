#include <iostream>
using namespace std;

int main()
{
    cout << "Enter X and Y coordinate\n";
    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    if (x > 0 && y > 0) {cout << "1st Quadrant";}
    else if (x > 0 && y < 0) {cout << "4th Quadrant";}
    else if (x < 0 && y < 0) {cout << "3rd Quadrant";}
    else if (x < 0 && y > 0) {cout << "2nd Quadrant";}
    else if (x==0 && y==0) {cout << "On The Origin";}
    else if (x == 0) {cout << "On The Y-Axis";}
    else if (y == 0){cout << "On The X-Axis";}
}