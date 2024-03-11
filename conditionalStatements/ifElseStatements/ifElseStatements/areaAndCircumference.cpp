
/*Given the radius of the circle predict whether numerically area of this
circle is larger than the circumference or not*/

#include <iostream>
using namespace std;
int main()
{
    float pi = 3.1415;
    float rad;
    cout << "enter the value of radius:";
    cin >> rad;
    float area = pi * rad * rad;
    float circumference = 2 * pi * rad;
    cout << "the area of circle is :" << area;
    cout << "the circumference is:" << circumference;
    if (area > circumference)
    {
        cout << "area of circle is larger than its circumference.";
    }
    else
    {
        cout << "circumference of circle is larger than its area.";
    }
    return 0;
}