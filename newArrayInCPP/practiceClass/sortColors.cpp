#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;
void sort(vector<int> &a){
    int noo = 0;
    int noz = 0;
    int notw = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
       if (a[i] == 0) noz++;
       else if (a[i] == 1) noo++;
       else notw++ ;
    }
    for (int i = 0; i < n; i++)
    {
        if (i<noz) a[i] = 0;
        else if(i<(noo+noz)) a[i] = 1; 
        else a[i] = 2;  
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    //sort(v.begin(),v.end());
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
}