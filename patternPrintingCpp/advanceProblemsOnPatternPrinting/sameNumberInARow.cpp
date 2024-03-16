/*  Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << number << " ";
        }
        number++;
        cout << endl;
    }
    return 0;
}