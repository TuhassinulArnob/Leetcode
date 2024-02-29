#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> numberOfLines(vector<int> &widths, string s)
    {
        map<char,int> pixel;
        int i=0;
        for(auto n:widths){
            pixel['a'+i]=n;
            i++;
        }
        int line=1;
        int Sum=0;
        for(auto c:s){
            Sum+=pixel[c];
            if (Sum > 100){
                ++line;
                Sum = pixel[c];
            }
            
        }
        vector<int> result;
        result.push_back(line); result.push_back(Sum);
        return result;      

    }
};

int main()
{

    Solution sol;
    vector<int> widths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    string s = "abcdefghijklmnopqrstuvwxyz";
    vector<int> result= sol.numberOfLines(widths,s);

    for(auto i: result){
        cout<<i<<" ";
    }
    

    return 0;
}