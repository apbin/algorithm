class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int>hash1;//保存words的单词频次
        for(auto& ch : words) hash1[ch]++;
        int len = words[0].size(), m = words.size(); vector<int> ret;
        for(int i = 0;i < len; i++)
        {
            unordered_map<string, int> hash2;
            for(int left = i, right = i, count = 0; right + len <= s.size(); right+=len)
            {
                //进窗口，维护count；
                string in = s.substr(right, len);
                hash2[in]++;
                if(hash1.count(in) && hash2[in] <= hash1[in]) count++;
                //判断；
                if(right-left+1 > len * m)
                {
                    //出窗口，维护count；
                    string out = s.substr(left,len);
                    if(hash1.count(out) && hash2[out] <= hash1[out]) count--;
                    hash2[out]--;
                    left+=len;
                }
                //更新结果
                if(count == m) ret.push_back(left);
            }
        }
        return ret;
    }
};