#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam \
    cin.tie(nullptr);        \
    cout.tie(nullptr);       \
    ios::sync_with_stdio(false);
#define int long long
#define ln '\n';
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) (int)x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>> // vii a (n,vi(m,0))
#define pii pair<int, int> #define all(v) v.begin(), v.end()
#define int1(t) \
    int t;      \
    cin >> t;
#define int2(n, k) \
    int n, k;      \
    cin >> n >> k;
#define int3(n, k, r) \
    int n, k, r;      \
    cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n) cout << fixed << setprecision(n)
int mex(vi &a, int n)
{
    set<int> st{all(a)};
    int res = 0;
    while (st.count(res))
        res++;
    return res;
}
typedef pair<int, int> pi;

const bool testcase = 0;

void solve()
{
    int2(n, k)
        v<pi>
            a(n);

    FOR(i, n)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    set<int> st;
    FOR(i, n) { st.insert(a[i].first); }+


    // cout <<  << ln;
    if (k > st.size())
    {
        cout << "NO" << ln;
        return;
    }
    cout << "YES" << ln;
    sort(all(a));
    int count = 0;
    FOR(i, n)
    {
        if (count < k)
        {
            if (i > 0 and a[i].first == a[i - 1].first)
                continue;
            else
            {
                count++;
                cout << a[i].second << ' ';
            }
        }
    }
    cout << ln;
}
// 1 2 3 4 5 6 7 9 10 12 13 15 16 17 18 19 20 21 22 23 24 25 27 28 29 31 33 36 37 38 39 41 42 43 44 45 47 49 50 51 52 54 57 58 59 60 73 74 76 77 79 80 83 -> Expected

// 1 2 3 4 5 6 7 9 10 12 13 15 16 17 18 19 20 21 22 23 24 25 27 28 29 31 33 36 37 38 39 41 42 43 44 45 47 49 50 51 52 54 57 58 59 60 73 74 76 77 79 80 83 85 88 93 96 97 98 100 -> Output

// 1 2 3 4 5 5 5 6 7 8 9 9 9 9 10 10 11 11 12 13 13 14 14 14 15 16 17 17 17 18 19 20 21 21 22 22 23 23 23 23 24 24 25 26 26 26 27 28 28 29 29 31 33 33 33 34 34 34 35 35 36 36 37 38 39 39 40 41 42 42 43 44 45 47 48 48 52 53 53 54 54 55 55 56 58 59 60 60 60 60 63 66 71 73 73 75 79 79 79 83 -> Input

signed main()
{
    ShreyanshSinghGautam

        int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


