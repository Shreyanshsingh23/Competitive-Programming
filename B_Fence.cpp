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

const bool testcase = 0;


void solve()
{
   int2(n,k)
   vi a (n);
   FOR(i,n) cin >> a[i];
   vi pref(1e6+10,0);
    int lessIndex = 0;
    pref[0] = a[0];
    cout << pref[0] << " ";
   for(int i = 1; i < n; i++){
        pref[i] = pref[i-1];
        pref[i] += a[i];
        cout << pref[i] << " ";
   }
   cout << ln;

    int minn = 
   for(int i = k-1; i < n; i++){
    
    if(pref[i] - pref[i-k] < minn){
        minn = pref[i] - pref[i-k];
        lessIndex = i-k+1;
    }
   }

    cout << lessIndex << ln;
   
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
