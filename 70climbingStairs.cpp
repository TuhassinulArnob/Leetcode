#include <bits/stdc++.h>
using namespace std;

int func(int n) {
    int dp[46];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cout<<dp[i]<<endl;
    }

    return dp[n];
}

int main() {
    cout << func(10) << endl;
    return 0;
}
