class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int maxLen = 1;  // 最长回文子串的长度
        int start = 0;   // 最长回文子串的起始位置

        for (int i = 0; i < n; i++) {
            dp[i][i] = true;  // 单个字符是回文
        }

        for (int len = 2; len <= n; len++) { // 子串长度从 2 开始
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1; // 子串的右边界
                if (s[i] == s[j]) {
                    if (len == 2 || dp[i+1][j-1]) {
                        dp[i][j] = true;
                        if (len > maxLen) {
                            maxLen = len;
                            start = i;
                        }
                    }
                }
            }
        }
        return s.substr(start, maxLen);
    }
};
