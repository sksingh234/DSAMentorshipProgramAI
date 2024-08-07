#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string s1,string s2){
    if (s1.length() != s2.length()) return false;
    vector<int> freq(26,0);
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
       if(freq[i] != 0) return false;
    }
    
    return true;

}
int main(){
    string s1 ,s2 ;
    cout<<"enter the values of string :";
    cin>>s1>>s2;
    bool flag = isAnagram(s1,s2);
    if (flag == true) cout<<"string is anagram";
    else cout<<"string is not an anagram";
}