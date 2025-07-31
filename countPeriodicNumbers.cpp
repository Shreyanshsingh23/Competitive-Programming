#include <bits/stdc++.h>
using namespace std;

#define int long long

// Generate periodic numbers from binary patterns up to a limit
void generatePeriodicNumbers(set<int>& periodicNumbers, int limit) {
    for (int len = 1; len <= 15; len++) { // Length of repeating block
        int pattern = (1 << len) - 1; // Initial block with all bits set
        for (int repeat = 1; repeat * len <= 30; repeat++) { // Repeat block
            int number = 0;
            for (int i = 0; i < repeat; i++) {
                number = (number << len) | pattern; // Append block to the number
            }
            if (number <= limit) {
                periodicNumbers.insert(number);
            }
        }
    }
}

int countInRange(const vector<int>& periodicList, int L, int R) {
    // Binary search for range boundaries
    auto left = lower_bound(periodicList.begin(), periodicList.end(), L);
    auto right = upper_bound(periodicList.begin(), periodicList.end(), R);
    return right - left;
}

void solve() {
    int T;
    cin >> T;
    
    // Precompute all periodic numbers up to 1e9
    set<int> periodicNumbers;
    int limit = 1e9;
    generatePeriodicNumbers(periodicNumbers, limit);
    
    // Convert set to sorted list for binary search
    vector<int> periodicList(periodicNumbers.begin(), periodicNumbers.end());
    
    // Process each test case
    while (T--) {
        int L, R;
        cin >> L >> R;
        cout << countInRange(periodicList, L, R) << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
