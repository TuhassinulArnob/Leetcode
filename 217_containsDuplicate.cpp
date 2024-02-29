#include <bits/stdc++.h>
using namespace std;

const int N = 60007;
    int arr[N];
    int singleNumber(vector<int>& nums) {
        memset(arr, 0, sizeof(arr));
        for(auto i : nums){
            arr[i+30000]++;
        }

        int result;

        for(auto i =0 ; i<=N ; i++){
            if(arr[i] == 1)   
            {result=i-30000; break;}
            
        } 
        return result;   
    }

int main()
{
    vector<int> nums={4,1,2,1,2};

    cout<<singleNumber(nums)<<endl;

    return 0;
}