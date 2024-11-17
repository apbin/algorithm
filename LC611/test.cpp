class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ret = 0,  n = nums.size();
        sort(nums.begin(), nums.end());

       for(int c = n-1; c >= 2 ;c--)
       {
        int left = 0, right = c-1;
        while(left<right)
        {
            if(nums[left] + nums[right] > nums[c])
            { 
                ret += right - left;
                right--;
            }
            else
            {
                left++;
            }
        }
       }
       return ret;
    }
};