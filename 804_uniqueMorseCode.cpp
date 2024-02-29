#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCode[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string , int> count;
        vector <string > morsePattern;
        for(int i=0; i<words.size(); i++){
            string temp = "";
            for (int j = 0; j < words[i].length(); j++){
                temp += morseCode[words[i][j]-'a'];

            }
            count[temp]++;
        }
        int answer=0;
        for (auto  x :count){
            answer++;
        }
        return answer;
    }
};

int main(){

    Solution sol;
    vector <string> words = {"gin","zen","gig","msg"};

    cout<<sol.uniqueMorseRepresentations(words);

    return 0;
}