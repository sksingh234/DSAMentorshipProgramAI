// calculating area of circle.


#include <iostream>
using namespace std;
int main()
{
    float pi = 3.1415;
    float rad;
    cout << "enter the value of radius:";
    cin >> rad;
    float area = pi * rad * rad;
    cout << "the area of circle is :" << area;
    return 0;
}