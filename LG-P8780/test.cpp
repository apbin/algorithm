#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll a, b, n;

int main(){

    cin>>a>>b>>n;

    if (a == 0 && b == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll k = 0;//余
    ll s1 = 5*a+2*b;//一周题数
    ll s2 = n % s1;//还剩几题
    ll s3 = n/s1;//做了几周；
    if(s2 <= 5*a) k = (s2+a-1)/a;
    else k = 5+(s2 - 5*a+b-1)/b;

    cout<< 7* s3 + k;

    return 0;
}