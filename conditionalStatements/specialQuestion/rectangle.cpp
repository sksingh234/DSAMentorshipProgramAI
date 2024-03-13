
// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter

#include <iostream>
using namespace std;
int main()
{
    int len;
    cout << "enter  the length of triangle:";
    cin >> len;
    int bre;
    cout << "enter  the breadth of triangle:";
    cin >> bre;
    int area, perimeter;
    area = len * bre;
    cout << "the area of rectangle is :" << area<<endl;
    perimeter =  2*(len * bre);
    cout << "the perimeter of rectangle is :" << perimeter<<endl;
    if (area > perimeter)
    {
        cout << "the area of rectangle is greater than perimeter.";
    }
    else
    {
        cout << "the perimeter of rectangle is greater than area.";
    }
    return 0;
}
