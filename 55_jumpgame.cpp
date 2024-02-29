#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;

int dp[N];

bool func(vector<int> &nums, int i) {
    if (i == nums.size() - 1) return true;
    if (nums[i] == 0) return false;
    if (dp[i] != -1) return dp[i];

    for (int j = 1; j <= nums[i]; j++) {
        if (func(nums, i + j)) {
            dp[i] = true;
            return true;
        }
    }

    dp[i] = false;
    return false;
}

bool canJump(vector<int> &nums) {
    memset(dp, -1, sizeof(dp));
    return func(nums, 0);
}

int main() {
    vector<int> nums = {3,2,1,0,4};

    cout << canJump(nums);

    return 0;
}
