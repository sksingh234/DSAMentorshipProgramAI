
/*    Print the reverse star triangle pattern
****
***
**     */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the reversr triangle pattern:";
    cin >> noOfRows;
    int stars = noOfRows;
    for (int i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        stars--;
    }

    return 0;
}