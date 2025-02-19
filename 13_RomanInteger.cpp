#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman;
        unordered_map<char,int> index;
        
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;

        index['I']=1;
        index['V']=2;
        index['X']=3;
        index['L']=4;
        index['C']=5;
        index['D']=6;
        index['M']=7;

        int ans=0;
        for (int i=s.size()-1; i>=0; i--){
            if(index[s[i]]>index[s[i-1]]){
                ans+=roman[s[i]]-roman[s[i-1]];
                i--;
            }else
            ans+= (roman[s[i]]);
        }
        return ans;
    }
};

int main(){

    Solution sol;
    string s = "III";
    cout << sol.romanToInt(s) << endl;


    return 0;
}