#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dp[10010];

int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    int ans = INT_MAX;
    if (dp[amount] != -1)
        return dp[amount];
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(amount - coin, coins) + 1LL);
    }
    return dp[amount] = ans;
}

int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    
    vector<int> coins = {1, 2, 5};
    cout << coinChange(coins, 11);

    return 0;
}