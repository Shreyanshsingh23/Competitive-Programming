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

const bool testcase = 0;

struct ass{
    int t,y,z;
};
bool check(ass *a, int m, int n, int x){
    int cnt = 0;
    FOR(i,n){
        int t = a[i].t, y = a[i].y, z = a[i].z;
        int rounds = x / ((t*y)+ z);
        cnt += rounds * y;
        int rem = x%((t*y)+ z);
        cnt += rem/t;
    }

    return cnt >= m;
}

void solve()
{
   int m; cin >>m;
   int1(n)
   ass a[n];
   FOR(i,n){
    cin >> a[i].t >> a[i].y >> a[i].z;
   }

   int l = 0, r = 1e9, mid, ans = 0;
   
   while( l <= r){
    mid = l + (r-l)/2;

    if(check(a,m,n,mid)){
        ans = mid;
        r = mid -1;
    }
    else l = mid + 1;
   }

    cout << ans << ln;

    FOR(i,n){
        int cnt = 0;
        int t = a[i].t, y = a[i].y, z = a[i].z;
        int rounds = ans / ((t*y)+ z);
        cnt += rounds * y;
        int rem = ans%((t*y)+ z);
        cnt += rem/t;
        cout << cnt << ' ';
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
