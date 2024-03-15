 
/*  Print the Solid Square  pattern 
****
****
**** 
****    */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the solid square pattern:";
    cin >> noOfRows;
    int noOfColumns =  noOfRows;
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