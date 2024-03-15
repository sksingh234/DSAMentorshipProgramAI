
/*Print the solid reactangle pattern

*****
*****
*****    */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the solid rectangle pattern:";
    cin >> noOfRows;
    int noOfColumns = ( noOfRows * 2) - 1;
    for (int  i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= noOfColumns; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}