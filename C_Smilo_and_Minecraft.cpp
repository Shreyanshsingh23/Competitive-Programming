#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        long long max_gold = 0;
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < m; y++) {
                if (grid[x][y] != '.') continue;
                long long gold = 0;
                int top = x - k, bottom = x + k;
                int left = y - k, right = y + k;
                for (int j = max(0, left); j <= min(m - 1, right); j++) {
                    if (top >= 0 && top < n && grid[top][j] == 'g') gold++;
                    if (bottom >= 0 && bottom < n && grid[bottom][j] == 'g') gold++;
                }
                for (int i = max(0, top); i <= min(n - 1, bottom); i++) {
                    if (left >= 0 && left < m && grid[i][left] == 'g') gold++;
                    if (right >= 0 && right < m && grid[i][right] == 'g') gold++;
                }
                max_gold = max(max_gold, gold);
            }
        }
        cout << max_gold << '\n';
    }
    cout.flush();
    return 0;
}