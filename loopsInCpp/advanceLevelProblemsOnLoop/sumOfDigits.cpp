
/*WAP to print sum of digits of a given number. */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of which you want to print the sum of digits:";
    cin >> n;
    int sumOfDigits = 0;
    for (int i = 1; n > 0; i++)
    {
        int remainder = n % 10;
        n = n / 10;
        sumOfDigits = sumOfDigits + remainder;
    }
    cout << "the sum of digits of given no is:" << sumOfDigits << endl;
    return 0;
}