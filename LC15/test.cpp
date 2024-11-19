class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> ret;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size();)
		{
			if (nums[i] > 0) break;
			int left = i + 1, right = nums.size() - 1, talget = -nums[i];
			while (left < right)
			{
				int tmp = (nums[left] + nums[right]);
				if (tmp > talget) right--;
				else if (tmp < talget) left++;
				else
				{
					ret.push_back({ nums[i], nums[left], nums[right] });
					right--, left++;
					while (left < right && nums[right] == nums[right + 1]) right--;
					while (left < right && nums[left] == nums[left - 1]) left++;
				}
			}
			i++;
			while (i < nums.size() && nums[i] == nums[i - 1]) i++;
		}
		return ret;
	}
};