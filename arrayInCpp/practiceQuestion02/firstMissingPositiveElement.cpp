/* find the first missing positive number

 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the positive integers :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            x++;
        }
        else{
            cout<<"the first missing positive number is : "<<x;
            break;
        }
         
    }
}