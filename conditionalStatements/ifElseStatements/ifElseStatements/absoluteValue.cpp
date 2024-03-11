
// Given an integer Print the absolute value of that integer

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your integer:";
    cin >> n;
    if (n < 0)
    {
        n = n * (-1);
    }
    cout << "the absolute value is :" << n;
    return 0;
}