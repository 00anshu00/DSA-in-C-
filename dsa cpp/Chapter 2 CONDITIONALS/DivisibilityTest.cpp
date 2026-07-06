#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Your Number: ";
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "Divisible By 3 And 5 Both";
    }
    else if (n % 5 == 0)
    {
        cout << "Divisible By 5";
    }
    else if (n % 3 == 0)
    {
        cout << "Divisible By 3";
    }
    else if (n % 3 != 0 || n % 5 != 0)
        cout << "Not Divisible By 3 Or 5";
}