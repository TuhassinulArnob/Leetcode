#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;

    void generate( int i, vector<int> &nums, vector<int> &sub){

        if(i==nums.size()) {ans.push_back(sub); return; }

        generate(i+1,nums,sub);

        sub.push_back(nums[i]);
        generate(i+1,nums,sub);
        sub.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        generate(0,nums,sub);
        return ans;
    }
};

int main(){

    Solution sol;
    vector<int> nums={1,2,3};
    sol.subsets(nums);


    return 0;
}