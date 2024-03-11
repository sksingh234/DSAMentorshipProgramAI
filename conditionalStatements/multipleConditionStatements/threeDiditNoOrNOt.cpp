
// Take positive integer input and tell if it is a three digit number or not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your positive integer:";
    cin >> n;
    if (n > 0 && n < 1000)
    {
        cout << "it is a three digit no:";
    }
    else
    {
        cout << "it is not a three digit no:";
    }
    return 0;
}