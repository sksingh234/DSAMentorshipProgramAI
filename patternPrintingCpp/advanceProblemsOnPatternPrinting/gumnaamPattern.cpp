/*  Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*           */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    int midValue = n;
    int upto = 1;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= upto; j++)
        {
            if (i <= midValue)
            {
                cout << "*";
            }
            else
            {
                cout << "*";
            }
        }
        if (i < midValue)
        {
            upto++;
        }
        else
        {
            upto--;
        }
        cout << endl;
    }
    return 0;
}