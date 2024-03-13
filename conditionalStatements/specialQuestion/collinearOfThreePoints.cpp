
// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "enter the value of x1:";
    cin >> x1;
    cout << "enter the value of y1:";
    cin >> y1;
    cout << "enter the value of x2:";
    cin >> x2;
    cout << "enter the value of :y2";
    cin >> y2;
    cout << "enter the value of x3:";
    cin >> x3;
    cout << "enter the value of y3:";
    cin >> y3;
    int slope1 = (y2 - y1) / (x2 - x1);
    int slope2 = (y3 - y2) / (x3 - x2);
    if (slope1 == slope2)
    {
        cout << "the given points lies on same line.";
    }
    else
    {
        cout << "the given points do not lie on same line.";
    }
    return 0;
}