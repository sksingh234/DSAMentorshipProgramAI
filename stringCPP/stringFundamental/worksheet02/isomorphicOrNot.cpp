#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s1,string s2){
    if (s1.length() != s2.length()) return false;
    
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    for (int i = 0; i < s1.length(); i++)
    {
        if(v1[s1[i]] != v2[s2[i]]) return false;
        else {
            v1[s1[i]] = i;
            v2[s2[i]] = i;
        }
    }

    return true;

}
int main(){
    string s1 ,s2 ;
    cout<<"enter the values of string :";
    cin>>s1>>s2;
    bool flag = isIsomorphic(s1,s2);
    if (flag == true) cout<<"string is Isomorphic";
    else cout<<"string is not an Isomorphic";
}