#include<bits/stdc++.h>
using namespace std;
const int N= 1e5 +10;

int dp[1001];

int minCostClimbingStairs(vector<int>& cost) {
    memset(dp,-1,sizeof(dp));
    int n= cost.size()+1;
    int minCost=0;

    if(n<0) return 0;
    else return cost[n];
    int onestep= cost[n-1] + minCostClimbingStairs(cost.end()-1);
    int onestep= cost[n-1] + minCostClimbingStairs(n-1);

    minCost+= min(cost[n-1],cost[n-2]);
    
    return minCost;
        
    }

int main(){
    
    vector<int> cost={10,15,20};
    cout<<minCostClimbingStairs(cost);
    
    return 0;
}