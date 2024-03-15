 
/* Print the alphaber square pattern
A B C D 
A B C D
A B C D
A B C D  */

#include <iostream>
using namespace std;
int main()
{
    int noOfRows;
    cout << "enter the no of rows upto which you want to print the alphabet square pattern:";
    cin >> noOfRows;
    int noOfColumns =  noOfRows;
    for (int  i = 1; i <= noOfRows; i++)
    {
        char alphabet = 'A';
        for (int j = 1; j <= noOfColumns; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
    }
    return 0;
}