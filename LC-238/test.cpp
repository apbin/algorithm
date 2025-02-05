class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>f(n), g(n), ret(n);

        //预处理前缀积后缀积
        f[0]=g[n-1]=1;
        for(int i = 1; i < n; i++)
            f[i] = f[i-1] * nums[i-1];
        for(int i = n-2; i >= 0; i--)
            g[i] = g[i+1] * nums[i+1];
        //使用
        for(int i = 0; i < n; i++)
            ret[i] = f[i] * g[i];
    
    return ret;
    }
};