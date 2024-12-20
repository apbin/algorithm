class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size()-1;
        while(left < right){
        int mid = left + (right-left+1)/2;
        if(arr[mid] > arr[mid-1]) left = mid;
        else right = mid -1;    
        }
        return left;

    }
};