class Solution {
public:
    int waysToStep(int n) {
        const int MOD = 1000000007;
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (n == 2) return 2;

        vector<int> dp(n + 1, 0);
        dp[0] = 1, dp[1] = 1, dp[2] = 2;
       
        for (int i = 3; i <= n; i++) 
            dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;

        return dp[n];
    }
        
};