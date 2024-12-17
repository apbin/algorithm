#include<bits/stdc++.h>
using namespace std;

int n = 0;

char trans(int a){
    if(a%n < 10) return a%n +'0';
    else return a%n + 'A' -10;

}

string tenk(int x){
    string a;
    for(int i =0; x>0; i++){
        a += trans(x);
        x/=n;
    }
    reverse(a.begin(),a.end());
    return a;
}

int main(){
    cin >> n;
    for(int i =1; i<n; i++,cout<<'\n' ){
        for(int j = 1; j<=i; j++){
            cout<<tenk(i) << '*' 
            << tenk(j) << '=' 
            << tenk(i*j) <<' ';
        }
    }

    return 0;
}