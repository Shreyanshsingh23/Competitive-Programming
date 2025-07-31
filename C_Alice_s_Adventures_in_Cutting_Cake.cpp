#include <bits/stdc++.h>
using namespace std;

#define int long long

bool canPartitionWithAlice(const vector<int>& a, int n, int m, int v, int aliceTastiness) {
    // Try to find a way to partition the array into m pieces for creatures with a remaining piece for Alice
    int creaturesSatisfied = 0;
    int current_sum = 0;

    // Forward pass: Try to allocate pieces to the creatures from the front of the array
    for (int i = 0; i < n; ++i) {
        current_sum += a[i];
        if (current_sum >= v) {
            creaturesSatisfied++;
            current_sum = 0;  // Reset for the next creature's segment
            if (creaturesSatisfied == m) break;  // If all creatures are satisfied, we can stop
        }
    }

    // If we haven't satisfied all creatures, it's impossible to satisfy the condition
    if (creaturesSatisfied < m) return false;

    // Calculate the remaining tastiness for Alice's piece
    int remaining_tastiness_for_alice = accumulate(a.begin(), a.end(), 0LL) - v * creaturesSatisfied;
    
    // Alice can take all remaining tastiness, but it should be at least the "aliceTastiness" to be valid
    return remaining_tastiness_for_alice >= aliceTastiness;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, v;
        cin >> n >> m >> v;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Binary search on the maximum tastiness Alice can have
        int left = 0, right = accumulate(a.begin(), a.end(), 0LL), result = -1;

        while (left <= right) {
            int mid = (left + right) / 2;

            // Check if Alice can have a tastiness of at least `mid` while satisfying all creatures
            if (canPartitionWithAlice(a, n, m, v, mid)) {
                result = mid;  // Valid tastiness, so try for a higher one
                left = mid + 1;
            } else {
                right = mid - 1;  // Invalid tastiness, so try for a lower one
            }
        }

        cout << result << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
