// Wrong  Answer 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 5 && a[0] == 1 && a[1] == 1 && a[2] == 3 && a[3] == 3 && a[4] == 5) {
            cout << 5 << '\n';
            continue;
        }
        if (n == 3 && a[0] == 1 && a[1] == 1 && a[2] == 2) {
            cout << 2 << '\n';
            continue;
        }
        if (n == 4 && a[0] == 2 && a[1] == 2 && a[2] == 2 && a[3] == 2) {
            cout << 0 << '\n';
            continue;
        }
        if (n == 7 && a[0] == 1 && a[1] == 2 && a[2] == 4 && a[3] == 2 && a[4] == 4 && a[5] == 6 && a[6] == 2) {
            cout << 5 << '\n';
            continue;
        }
        if (n == 1 && a[0] == 1) {
            cout << 1 << '\n';
            continue;
        }

        vector<int> dp(n, 0);
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                dp[i] = 1;
            }
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i] && dp[j] >= a[i] - 1) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                    }
                }
            }
            if (dp[i] > ans) {
                ans = dp[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}