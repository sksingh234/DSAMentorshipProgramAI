/*   Print the following pattern
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5     */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int number = 1;
        char alphabet = 'A';
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << alphabet << " ";
                alphabet++;
            }
            else{
                cout<<number<<" ";
                number++;
            }
        }
        cout << endl;
    }
    return 0;
}