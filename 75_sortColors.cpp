#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++){
            for(int j = i+1;j < nums.size();j++){
                if(nums[j] < nums[i]){
                    swap(nums[j],nums[i]);
                }
            }
        }
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