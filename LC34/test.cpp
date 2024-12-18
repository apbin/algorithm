class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1, -1};
        int left = 0, right = nums.size()-1, begin = 0, end = 0;
        while(left < right)
        {
            int mid = left + (right -left)/2;
            if(nums[mid] < target) left = mid +1;
            else right = mid;
        }

        if(nums[left]==target) begin = left;
        else return {-1, -1};

        right = nums.size()-1;
        while(left<right)
        {
            int mid = left + (right - left + 1)/2;
            if(nums[mid] > target) right = mid -1;
            else left = mid;
        }
        end = right;

        return {begin, end};
    }
};