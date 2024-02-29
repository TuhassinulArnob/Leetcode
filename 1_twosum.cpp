#include <bits/stdc++.h>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {\
        vector<int> result;
        int n= nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; i<n; j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                    
                }
            }
        }

    }


int main()
{
    vector<int> nums={2,7,11,15};
    int target= 9;

    vector<int> result= twoSum(nums,target);
    
    for (auto i:result){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}