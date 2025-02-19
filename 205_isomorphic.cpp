#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> hash;
        if(s.size()!=t.size()) return false;
        int i= 0;
        for(auto c : s){
            if()
            hash[c]=t[i];
            i++;

        }
    }
};

int main(){

    Solution sol;
    cout<<sol.isIsomorphic("egg", "add")<<endl;
    return 0;
}