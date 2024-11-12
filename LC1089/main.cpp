#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int cur=0,dest=-1,n=arr.size();
        while(cur<n)
        {
            if(arr[cur]) dest++;
            else dest += 2;
            if(dest >= n-1) break;
            cur++;
        }

        if(dest==n)
        {
            arr[n-1]=0;
            cur--;
            dest-=2;
        }

        while(cur>=0)
        {
            if(arr[cur]!=0) 
            {
                arr[dest]=arr[cur];
                dest--;
                cur--;
            }
           else 
           {
            arr[dest--]=0;
            arr[dest--]=0;
            cur--;
           }
        }
    }
};