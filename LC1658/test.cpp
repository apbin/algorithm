class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum =0, ret = -1, n = nums.size();
        for(int e:nums) sum += e;
        int talget = sum - x;
        if(talget < 0) return -1;
        for(int left = 0, right = 0, tmp = 0; right < n; right++)
        {
           tmp += nums[right];
          while(tmp > talget)
            tmp -= nums[left++];
          if(tmp == talget)
            ret = max(ret , right - left + 1);
        }
        if(ret == -1) return ret;
        else return n - ret;
    }
};