 
/* Print the odd Number Triangle pattern

1 
1 3 
1 3 5 
1 3 5 7
           */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the odd number triangle pattern:";
    cin >> noOfRows;
    for (int  i = 1; i <= noOfRows; i++)
    {
       int number = 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number+=2;
        }
        cout<<endl;
    }
    return 0;
}