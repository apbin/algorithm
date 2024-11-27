class Solution {
public:
	int totalFruit(vector<int>& f) {
		int ret = 0, kinds = 0;
		int hash[100001] = { 0 };
		for (int left = 0, right = 0; right < f.size(); right++)
		{
			if (hash[f[right]] == 0) kinds++;
			hash[f[right]]++;
			while (kinds > 2)
			{
				hash[f[left]]--;
				if (hash[f[left]] == 0) kinds--;
				left++;
			}
			ret = max(ret, right - left + 1);
		}
		return ret;
	}
};