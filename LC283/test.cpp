#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int cur=0,dest=-1;cur<nums.size();cur++)
        {
            if(nums[cur])
            {
                swap(nums[++dest],nums[cur]);
            }

        }
        
    }
};