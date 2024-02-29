#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<string> splitStringIntoWords(string s){
        stringstream ss(s); 
        string word;      
        vector<string> words; 
        while (ss >> word) {
            words.push_back(word);
        }
        return words;        
    }

    bool wordPattern(string pattern, string s) {

        unordered_map<char,string> comp;
        int n= pattern.size();
        vector<string> words = splitStringIntoWords(s);
        for(int i=0; i<n; i++){
            comp[pattern[i]]=words[i];
        }
        int j=0;
        for(auto i:comp){
            if(i.first!=pattern[j]) return false;
            j++;
        }
        return true;

        
    }
};

int main(){
    Solution sol;

    string pattern ="abba",s="dog cat cat dog";
    
    cout<<sol.wordPattern(pattern,s)<<"\n";
    return 0;
}