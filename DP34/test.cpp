#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, q, l, r;
    cin>>n>>q;
    vector <int> arr(n+1);
    for(int i = 1;i <= n;i++) cin>>arr[i];

    vector<long long> dp(n+1);
    for(int i = 1;i<=n; i++) dp[i]=dp[i-1]+arr[i];

    while(q--)
    {   
        cin>>l>>r;
        cout << dp[r]-dp[l-1]<< endl;
    } 

    return 0;
 
}