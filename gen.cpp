#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int gen_random(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}
signed main() {
    if (freopen("in.txt", "w", stdout) == nullptr) {
        perror("Error opening in.txt for writing");
        return EXIT_FAILURE;
    }    
    /* 
        1. write code for generate testcase according to input constraints
        2. Write code accoding to input format
        3. If given multiple testcase, ignore this, simply use only single testcase
    */
    return 0;
}
