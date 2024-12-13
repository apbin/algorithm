#include <bits/stdc++.h>
using namespace std;

int main(){
    int m = -1, n = -1, N, x;
    int hash[10002] = {0};
    cin>>N;
    while (cin>>x) hash[x]++;
       
    //判断
    for(int i = 1;i < 10001;i++) {
        if(hash[i] == 0 && hash[i+1] ==1
        && hash[i-1] == 1) m = i;

        else if(hash[i]>=2) n = i;
        else if(m!=-1 && n!=-1) break;
    }

    cout<< m << " " << n << endl; 
    return 0;
}