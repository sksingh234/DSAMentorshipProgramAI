
// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter coordinate of x-axis:";
    cin >> x;
    int y;
    cout << "enter coordinate of y-axis:";
    cin >> y;
    if (x == 0)
    {
        cout << "given coordinate lies on y-axis.";
    }
    else if (y == 0)
    {
        cout << "given coordinate lies on x-axis.";
    }
    else if (x == 0 && y == 0)
    {
        cout << "given coordinate lies on origin.";
    }
    else
    {
        cout << "given coordinate lies between the axes.";
    }
    return 0;
}