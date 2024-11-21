class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size(), sum = 0, ret = INT_MAX;
        for(int left = 0, right = 0;right < n;right++) {
            sum += nums[right];
            while(sum >= target) {
                ret = min(ret, right-left+1);
                sum -= nums[left];
                left++;

            }
        }
        return ret == INT_MAX ? 0 : ret;
    }
};