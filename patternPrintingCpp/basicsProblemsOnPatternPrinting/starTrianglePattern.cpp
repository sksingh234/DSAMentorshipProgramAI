 
/* Print the star triangle pattern
*
**
***
****  */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the star triangle pattern:";
    cin >> noOfRows;
    for (int  i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}