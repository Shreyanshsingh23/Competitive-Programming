#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>                //vvi a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 0;


void solve()
{
   int1(n)
   string s; cin >> s;

    if(n<3){ cout << 0 << ln
    return;}

    int count = 0;
   for(int i = 1; i< n-1; i++){
    if(s[i-1] == '#' and s[i]== '.' and s[i+1] == '#'){
        count ++;
    }
   }
   cout << count << ln;
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
