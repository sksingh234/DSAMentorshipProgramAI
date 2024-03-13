
//  Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include <iostream>
using namespace std;
int main()
{
    // value of a,b,c must be greater than 0.
    int a, b, c;
    cout << "enter length of side 1:";
    cin >> a;
    cout << "enter length of side 2:";
    cin >> b;
    cout << "enter length of side 3:";
    cin >> c;

    if (a + b > c || a + c > b || c + b > a)
    {
        if (a == b && b == c)
        {
            cout << "it is an eqilateral triangle.";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "it is an  isosceles triangle.";
        }
        else
        {
            cout << "it is an scalene triangle.";
        }
    }
    else
    {
        cout << "it is not an triangle.";
    }

    return 0;
}
