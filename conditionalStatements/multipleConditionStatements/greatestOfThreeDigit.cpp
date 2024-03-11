
// Take 3 positive integers input and print the greatest of them.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter your positive integer:";
    cin >> a;
    cout << "enter your positive integer:";
    cin >> b;
    cout << "enter your positive integer:";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greatest."<<a;
        }
        else
        {
            cout << "c is greatest."<<c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "%d is greatest."<<b;
        }
        else
        {
            cout << "%d is greatest."<<c ;
        }
    }
    return 0;
}
