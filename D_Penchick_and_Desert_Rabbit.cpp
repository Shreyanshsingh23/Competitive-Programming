#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln '\n';
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) (int) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb push_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
#define F first
#define S second
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int1(n)
   vi a (n);
   FOR(i,n) cin >> a[i];

    vi pref(n), suff(n), ans(n);

    pref[0] = a[0];
    for(int i = 1; i< n; ++i){
        pref[i] = max(pref[i-1], a[i]);
    }

    suff[n-1] = a[n-1];
    for(int i = n-2; i >= 0; --i){
        suff[i] = min(suff[i+1], a[i]);
    }

    ans[n-1] = pref[n-1];

    for(int i = n-2; i >= 0; --i){
       if( suff[i+1] < pref[i]) ans[i] = ans[i+1];
       else ans[i] = pref[i];
    }   

    for(int i = 0; i< n; ++i){
        cout << ans[i] << ' ';
    }
    cout << ln;
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
