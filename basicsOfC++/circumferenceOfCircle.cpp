
// Write a program to find the circumference of a circle with radius 10 in C++.

#include <iostream>
using namespace std;
int main()
{
    float pi = 3.1415, rad;
    cout << "enter the value of radius:";
    cin >> rad;
    float cr = 2 * pi * rad;
    cout << "the circumference is:" << cr;
    return 0;
}