#include <bits/stdc++.h>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) return 0;
        // Initialize current sum and maximum sum to the first element of array
        int curr_sum = nums[0], max_sum = nums[0];
        
        
    }



int main() {
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);

    return 0;
}
