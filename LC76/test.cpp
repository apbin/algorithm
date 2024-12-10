class Solution {
public:
    string minWindow(string s, string t) {
        int hash1[128] = {0}; int kinds = 0;
        for(auto ch : t)
        {
            if(hash1[ch] == 0) kinds++;
            hash1[ch]++;
        }
        //进窗口，维护count
        int hash2[128] = {0}, minlen = INT_MAX, begin = -1;
        for(int left = 0, right = 0, count = 0; right < s.size(); right++)
        {
            char in = s[right];
            if(hash1[in] == ++hash2[in]) count++;
            //判断+更新结果
            while(kinds == count)
            {
                if(right - left + 1 < minlen)
                {
                    begin = left;
                    minlen = right - left + 1;
                }
                //出窗口，维护count
                char out = s[left++];
                if(hash1[out] == hash2[out]--) count--;
            }
        }
        if(begin == -1) return "";
        else return s.substr(begin, minlen);

    }
};