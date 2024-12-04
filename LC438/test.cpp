class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int hash1[26] = { 0 }; vector<int> ret;
        for( auto e : p) hash1[e - 'a']++;
        int hash2[26] = { 0 };
        for(int left = 0, right = 0, count = 0; right < s.size(); right++)
        {
            char in = s[right];
            hash2[in - 'a']++;
            if(hash2[in - 'a'] <= hash1[in - 'a']) count++;
            if(right - left + 1 > p.size())
            {    
                char out = s[left++];
                if(hash2[out - 'a'] <= hash1[out - 'a']) count--;
                hash2[out - 'a']--;
            }
            if(count == p.size()) 
            ret.push_back(left);
        }
        return ret;
    }
};