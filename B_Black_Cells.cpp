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
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 1;
bool isPossible(int mid, vi& a, int n){
    bool flag = false;
    for(int i = 0; i< n-1; i++){
        if(a[i+1]-a[i] <= mid) i++;
        else flag = true;

        if(flag and a[i+1]-a[i] >  mid) return false;
    }

    return true;
}

void solve()
{
   int1(n)
   vi a (n);
   FOR(i,n) cin >> a[i];

   int e = 0,ans = 0;
   FOR(i,n-1) e = max(e,a[i+1]-a[i]);

   int s = 1;

   while(s <= e){
    int mid = (s+e)/2;
    if(isPossible(mid,a,n)){
        ans = mid;
        e = mid-1;
   }
   else s = mid+1;
   }
   
   cout  << ans << ln;
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
