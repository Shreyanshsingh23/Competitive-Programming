#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> impressions(n);
        for (int i = 0; i < n; i++) {
            cin >> impressions[i].first >> impressions[i].second;
        }
        vector<int> available(2 * n + 1);
        for (int i = 1; i <= 2 * n; i++) {
            available[i] = i;
        }
        string result = "";
        for (int i = 0; i < n; i++) {
            bool unique = false;
            for (int j = 1; j <= 2 * n; j++) {
                if (j >= impressions[i].first && j <= impressions[i].second && available[j] != -1) {
                    available[j] = -1;
                    unique = true;
                    break;
                }
            }
            result += (unique ? '1' : '0');
        }
        cout << result << endl;
    }
    return 0;
}