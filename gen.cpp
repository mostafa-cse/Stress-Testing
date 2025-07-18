#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int gen_random(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}
signed main() {
    freopen("in.txt", "w", stdout);
    cout << 1 << endl;
    
    int n = gen_random(1, 10);
    cout << n << endl;
    for (int i = 1; i <= n; i++) {
        cout << gen_random(1, n) << " ";
    }
    return 0;
}
