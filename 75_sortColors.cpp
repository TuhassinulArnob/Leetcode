#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

int main(){

    Solution sol;
    vector<int> nums={2,0,2,1,1,0};
    sol.sortColors(nums);

    for(auto i : nums){
        cout<<i<<" ";
    }

    return 0;
}