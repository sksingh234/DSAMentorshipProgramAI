 
/* Print the number square pattern
1 2 3 4
1 2 3 4 
1 2 3 4 
1 2 3 4   */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the number square pattern:";
    cin >> noOfRows;
    int noOfColumns =  noOfRows;
    for (int  i = 1; i <= noOfRows; i++)
    {
       int number = 1;
        for (int j = 1; j <= noOfColumns; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}