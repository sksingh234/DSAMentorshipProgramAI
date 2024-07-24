/*
Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    bool flag = false;
    for (int i = 0; i < v.size(); i += 2)
    {
        if (flag == false)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[i] == v[j]) break;
                else
                {
                    cout << "the unique element is : " << v[i];
                    flag = true;
                    break;
                }
            }
        }
    }
}