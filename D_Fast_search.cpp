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

const bool testcase = 0;


void solve()
{
   int1(n)
   vi a (n);
   FOR(i,n) cin >> a[i];
   sort(all(a));
   int q; cin >> q;
   while(q--){
    int s ,e; cin >> s >> e;
    // cout << "s = " << s << ' ' << "e = " << e << ln;
    int resl = -1, resr = n;
    int l = 0, r = n-1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(a[mid] >= s){
            resl = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    // cout << " r: " << r << ln;
   
    l = 0, r = n-1;
   while(l <= r){
    int mid = l + (r-l)/2;
    if(a[mid] <= e ){
        resr = mid;
        l = mid+1;
    }
    else r = mid-1;
   }

//    cout << "l: " << l <<ln;
//    cout << "resl = " << resl << ' ' << "resr = " << resr << ln;
    if(resl == -1 or resr == n)cout << 0 <<ln
   else cout << resr - resl + 1 << ' ';
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
