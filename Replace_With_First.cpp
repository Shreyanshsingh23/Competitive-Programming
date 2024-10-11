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
   string a,b; cin >> a >> b;
   if(a==b){ 
    cout << 0 << endl;
    return;
   }

   if(m>n) swap(a,b);

   if(a.substr(0,min(m,n)) == b) cout << 1 << ln
    else cout << 2 << ln;
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
