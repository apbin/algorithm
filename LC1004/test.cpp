class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ret = 0, left = 0, right = 0, zero = 0;
        for(;right < nums.size(); right++)
        {
            if(nums[right] == 0) zero++;
            while(zero > k)
                if(nums[left++] == 0) zero--;
            ret = max(ret, right - left + 1);
       }
       return ret;
    }
};