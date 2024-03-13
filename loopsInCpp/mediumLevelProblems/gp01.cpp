
//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of terms till which you want to print the gp:";
    cin >> n;
    int gp = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << gp << " ";
        gp*=2;
    }
    return 0;
}