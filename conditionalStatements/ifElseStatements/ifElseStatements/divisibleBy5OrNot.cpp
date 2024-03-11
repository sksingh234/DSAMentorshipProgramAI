
// Take positive integer input and tell if it is divisible by 5 or not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your positive integer:";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "it is divisible by 5.";
    }
    else
    {
        cout << "it is not divisible by 5.";
    }
    return 0;
}
