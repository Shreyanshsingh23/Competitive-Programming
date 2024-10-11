#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define vl vector<int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 0;

void solve()
{
   int3(n,x,y)
   vector<vector<int>> v(n,vector<int>(n));
    // cout << x << " " << y << ln
   FOR(i,n){
    FOR(j,n){
        cin >> v[i][j];
    }
   }

   FOR(i,n){
    swap(v[x-1][i],v[y-1][i]);
   }

   FOR(i,n){
    swap(v[i][x-1],v[i][y-1]);
   }

   FOR(i,n){
    for(auto e:v[i]){
        cout << e << ' ';
    }
    cout << ln
   }
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
