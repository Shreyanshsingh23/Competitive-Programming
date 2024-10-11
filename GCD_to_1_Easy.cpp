#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl;
// #define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;

void solve()
{
   int2(n,m)
    vector<vl> v(n, vl(m));
    int index = 0;
    int minn = min(n,m);
    if (n == 1 || m == 1) {  
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << 2 << " ";
            }
            cout << ln;
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0 && j % 2 == 0)
                v[i][j] = 2;
            else if (i % 2 == 0 && j % 2 != 0)
                v[i][j] = 3;
            else if (i % 2 != 0 && j % 2 == 0)
                v[i][j] = 3;
            else
                v[i][j] = 2;
        }
    }

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v[i][j] << " ";
        }
        cout << ln;
    }
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
