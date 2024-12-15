#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200010],b[200010];
long long sum=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        b[i]=b[i-1]+a[i];
    }
    for(int i=1;i<n;i++){
        sum+=a[i]*(b[n]-b[i]);
    }
    cout<<sum<<endl;
    return 0;
}