
/*Print the given pattern(BINARY TRIANGLE)
1
0 1
1 0 1
0 1 0 1   */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    int number;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            number = 0;
        }
        else
        {
            number = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            if (number == 1)
            {
                number = 0;
            }
            else
            {
                number = 1;
            }
        }
        cout << endl;
    }
    return 0;
}