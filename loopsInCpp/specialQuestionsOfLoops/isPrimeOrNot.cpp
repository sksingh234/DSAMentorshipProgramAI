
//WAP to check if a number is prime or not (use of break statement

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number you want to check prime or not :";
    cin >> n;
    if (n == 1)
    {
        cout << " it is neither prime nor composite.";
    }
    if (n == 2)
    {
        cout << " it is the only even prime number.";
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << " it is not a prime no";
            break;
        }
        else
        {
            continue;
        }
        cout << " it is a prime number.";
    }

    return 0;
}