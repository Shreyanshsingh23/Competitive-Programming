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

const bool testcase = 0;
void minmax(vl& v){
    int minn = INT_MAX, maxx = INT_MIN;
    for(int e:v){
        if(e > maxx){
            maxx = e;
        }
        if(e < minn){
            minn = e;
        }
    }

    cout << minn << " " << maxx << ln;
}
void solve()
{
   int1(n)
   vl v(n);
   FOR(i,n) cin >> v[i];

   minmax(v);
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
