/*   Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1         */



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin >>n;
    int upto  = n;
    for (int i = 1; i <= n; i++)
    {
        int number = 1;
        for (int j = 1; j <= upto; j++)
        {
            cout<<number<<" ";
            number++;
        }
        upto--;
        cout<<endl;
    }
    return 0;
}