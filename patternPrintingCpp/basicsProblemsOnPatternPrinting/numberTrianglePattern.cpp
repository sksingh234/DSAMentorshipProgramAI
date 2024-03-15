 
/* Print the number triangle pattern
1 
1 2 
1 2 3 
1 2 3 4  */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the number triangle pattern:";
    cin >> noOfRows;
    for (int  i = 1; i <= noOfRows; i++)
    {
       int number = 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}