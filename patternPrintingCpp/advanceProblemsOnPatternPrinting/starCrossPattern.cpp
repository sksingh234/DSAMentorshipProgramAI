
// print the star cross pattern for n = odd.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the odd value of n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i+j == n+1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}