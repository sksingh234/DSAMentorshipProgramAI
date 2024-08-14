 // find bounds if the target is not present.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 10;
    int lo = 0;
    int hi = n - 1;
    int lower = 0;
    int upper = 0;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(arr[mid] > x){
              hi = mid - 1;
              upper = hi;
        }
        else {
            lo = mid +1;
            lower = lo;
        }

    }
    cout<<"the upper bound is : "<<upper<<endl;
    cout<<"the lower bound is : "<<lower;
}