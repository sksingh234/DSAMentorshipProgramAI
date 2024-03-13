
//Display this GP - 3,12,48,.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of terms till which you want to print the gp:";
    cin >> n;
    int gp = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << gp << " ";
        gp*=4;
    }
    return 0;
}