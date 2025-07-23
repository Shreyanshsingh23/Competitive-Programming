#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n, x;
    cin >> n >> x;

    // This base case remains the same.
    if (n == 1) {
        cout << x << endl;
        return;
    }
    
    // The problem requires choosing n distinct non-negative integers summing to less than x.
    // The minimum sum is 0 + 1 + ... + (n-1) = n*(n-1)/2.
    // If this minimum sum is already >= x, no solution is possible.
    if (1LL * n * (n - 1) / 2 >= x) {
        cout << 0 << endl;
        return;
    }

    // dp[i][s]: number of ways to partition s into i distinct positive parts.
    // We need sums up to (x-1)+n, so size is x+n.
    vector<vector<int>> dp(n + 1, vector<int>(x + n, 0));
    
    // Base case: There's one way to partition 0 into 0 parts (the empty partition).
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s < x + n; ++s) {
            // Recurrence: dp[i][s] = dp[i][s-i] + dp[i-1][s-i]
            int val1 = 0;
            if (s >= i) {
                val1 = dp[i][s - i];
            }
            int val2 = 0;
            if (s >= i) {
                val2 = dp[i-1][s - i];
            }
            dp[i][s] = (val1 + val2) % MOD;
        }
    }

    long long total_sets = 0;
    // We need to count sets of n distinct non-negative integers {b_i}
    // where sum(b_i) = j, for j < x.
    // This is equivalent to partitions of j+n into n distinct positive parts, which is dp[n][j+n].
    for (int j = 0; j < x; ++j) {
        if (j % (n - 1) == x % (n - 1)) {
            total_sets = (total_sets + dp[n][j + n]) % MOD;
        }
    }

    cout << total_sets << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}