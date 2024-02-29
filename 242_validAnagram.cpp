#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.size() != s.length()) return false;

        int count[26] = {0};

        for (int i = 0; i<s.length(); i++) {
            count[t[i]-'a']++;
            count[s[i]-'a']--;
        }

        for (auto c: count){
            if (c!=0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s = "nl";
    string t = "cx";
    cout << sol.isAnagram(s, t);
    return 0;
}
