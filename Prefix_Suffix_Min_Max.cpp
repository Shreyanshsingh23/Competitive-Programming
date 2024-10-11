//ACCEPTED

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ln endl;
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>
#define pii pair<int,int>

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
   int1(n)
   vl b(n), a(n);
   FOR(i,n) {
    cin >> b[i];
   }

    int mxx = MIN;

    for(int i = 1; i< n; i++){
        a[i] = b[i]- b[i-1];
        mxx = max(mxx,a[i]);
    }

    a[0] = mxx + 1;

    for(auto e : a){
        cout << e << " ";
    }
    cout << ln;



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
