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
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
int gcd(int a, int b){if(b == 0)return a; return gcd(b, a % b);}
int poww(int a,int b){if(b == 0)return 1; if(!(b&1)){int ans = poww(a,b/2);return 1ll*ans*ans;} else {int ans=poww(a,(b-1)/2);return 1ll*ans*ans*a;}}
typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int1(n)
   int k; cin >>k;
   vi a (n), b(n),pref(n),ans(n);
   FOR(i,n){
     cin >> a[i];
     b[i] = a[i];
   }
    sort(all(b));
    pref[0] = b[0];
    for(int i = 1; i< n; i++){
        pref[i] = pref[i-1] + b[i];
    }

    FOR(i,k) ans[i] = pref[i];
    ans[k] = pref[k]- b[0];
    for(int i = k+1; i < n; i++){
        ans[i] =pref[i]-pref[i-k]+ ans[i-k-1];
    }


    FOR(i,n){
        cout << ans[i] << ' ';
    }
   cout << ln;
//    bitset<6> z = {34};
//    cout << z.to_string() << ln;
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
