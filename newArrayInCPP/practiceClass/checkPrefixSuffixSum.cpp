#include <iostream>
#include <vector>
using namespace std;
bool checkSum(vector<int> &a){
    int n = a.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int suffixSum = 0;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += a[i];
        suffixSum = sum - prefixSum;
        if (prefixSum == suffixSum) return true;
    }
    return false;

}
int main()
{
    int n;
    cout << "enter the value for n :";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    if(checkSum(v)) cout<<"prefix sum is equal to suffix sum";
    else cout<<"prefix sum is not equal to suffix sum";
}