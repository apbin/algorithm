#include<bits/stdc++.h>
#define int long long
using namespace std;

int main() {  // 添加返回值类型
    int n, a[1234567], cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i], cnt += (a[i] == 1 ? 1 : 0);

    if (cnt) {  // 如果有 1，直接输出结果
        cout << n - cnt;
        return 0;
    }

    int ans = 1e9;
    for (int i = 1; i < n; i++) {  // 枚举开始端点
        int x = a[i], sum = 0;
        for (int j = i + 1; j <= n; j++) {
            sum++;
            x = __gcd(x, a[j]);
            if (x == 1) {  // 成功找到
                ans = min(ans, sum);
                break;
            }
        }
    }

    if (ans == 1e9) cout << -1;  // 无法找到合法结果
    else cout << n + ans - 1;

    return 0;  // 添加返回值
}
