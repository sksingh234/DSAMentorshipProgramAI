
/*WAP to print reverse of a given number. */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of which you want to print the reverse of itself:";
    cin >> n;
    int reverse = 0;
    for (int i = 1; n > 0; i++)
    {
        int remainder = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + remainder;
    }
    cout << "the reverse of given number is:" << reverse << endl;
    return 0;
}