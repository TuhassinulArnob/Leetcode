#include<bits/stdc++.h>
using namespace std;

int dp[31];

int fib(int n) {
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];        
}

int main(){
    
    cout<<fib(2);
    
    return 0;
}