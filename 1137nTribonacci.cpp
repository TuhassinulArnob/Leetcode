#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[38];
    int tribonacci(int n) {
        dp[0]=0,dp[1]=1, dp[2]=1;
        for(int i=3; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        } 
        return dp[n];       
    }
};

int main(){

    Solution sol;
    cout<<sol.tribonacci(3);

    return 0;
}