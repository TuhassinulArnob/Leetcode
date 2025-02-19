#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size());
        stack<int> st;

        for(int i=0; i<nums.size(); i++){

            while(!st.empty()&& nums[i]>nums[st.top()]){
                ans[st.top()]=nums[i];
                st.pop();
            }

            st.push(i);
        }
        while(!st.empty()){
            ans[st.top()]=-1;
            st.pop();
        }
        return ans;
    }
};

int main(){

    Solution sol;
    vector<int> nums={4, 5, 2, 25,4,8,10,9};
    vector<int> ans= sol.nextGreaterElements(nums);
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}