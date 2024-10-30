#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln '\n';
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int1(n)
   vi a (n),b(n);
   FOR(i,n) cin >> a[i];
   
   FOR(i,n) cin >> b[i];

   vector<pair<int, int>> items;
    for (int i = 0; i < n; i++) {
        items.push_back({b[i] - a[i], i});  // Sorting factor (B[i] - A[i])
    }

    // Sort items based on cost difference in ascending order
    sort(all(items));
    

    int total_cost = 0;
    vector<bool> used(n, false);

    for (int i = 0; i < n; i++) {
        int idx = items[i].second;
        if (i < n - 1) {
            total_cost += b[idx];
        } else {
            total_cost += a[idx];
        }
    }

    cout << total_cost << ln;
   
}

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
