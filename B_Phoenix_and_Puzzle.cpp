#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl;
// #define ln "\n"
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t)  int t;cin >> t;
#define int2(n, k)  int n, k;cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

const bool testcase = 1;

void solve()
{
    int1(n) if (n & 1)
    {
        cout << "NO" << ln;
        return;
    }
    int sum = 2;
    for (int i = 1; sum < n; i++)
    {
        sum *= i;
        if (sum == n)
        {
            cout << "YES" << ln;
            return;
        }
    }

    cout << "NO" << endl;
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
