class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int>hash;
        hash[0%k] = 1;
        int sum = 0, ret = 0;
        for(auto e : nums)
        {
            sum += e; //记录当前的前缀和;
            int r = (sum % k + k) % k;
            if(hash.count(r))
                ret+=hash[r];
            hash[r]++; 
        }
        
        return ret;
    }
};