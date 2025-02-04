#include <iostream>
#include <vector>
using namespace std;

int main() {
    //读入数据；
    int n = 0,m = 0,q = 0;
    cin>> n >> m >> q;
    vector<vector<int>> arr(n + 1, vector<int> (m + 1));
    for(int i = 1; i <= n;i++)
        for(int j = 1; j<= m; j++)
            cin >> arr[i][j];
    //预处理DP；
    vector<vector<long long>> dp(n+1, vector<long long> (m+1));
    for(int i = 1; i <= n;i++)
        for(int j = 1; j<= m; j++)
            dp[i][j]= dp[i-1][j] + dp[i][j-1] + arr[i][j]- dp[i-1][j-1];
    //使用前缀和矩阵
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0; 
    while(q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1] << endl;
    }

    return 0;
}