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
#define pb push_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
int gcd(int a, int b){if(b == 0)return a; return gcd(b, a % b);}
int poww(int a,int b){if(b == 0)return 1; if(!(b&1)){int ans = poww(a,b/2);return 1ll*ans*ans;} else {int ans=poww(a,(b-1)/2);return 1ll*ans*ans*a;}}
typedef pair<int, int> pi;
#define F first
#define S second
const bool testcase = 1;


void solve()
{
   int1(k)
   int n = k-2;
   v<pi> fac;
   map<int,int> mp;
   for(int i = 1; i*i <= n; i++){
    if(n%i == 0){
        fac.pb({i,n/i});
    }
   }

   vi a (k);
   FOR(i,k){
     cin >> a[i];
     mp[a[i]]++;
   }
    int x,y;
   FOR(i,fac.size()){
    if(fac[i].F == fac[i].S){
        if(mp[fac[i].F] > 1){
            x = y = fac[i].F;
            break;
        }
    }

    if(mp[fac[i].F] > 0 and mp[fac[i].S] > 0){
        x = fac[i].F;
        y = fac[i].S;
        break;
    }
   }
   cout << x << ' ' << y << ln;
    bool fir = false, sec = false;
        vii ans;

    // if(x == y){
    //     vi temp;
    //     FOR(i,k){
    //         if(!fir and a[i] == x){
    //             fir= true;
    //             continue;
    //         }
    //         if(!sec and a[i] == x){
    //             sec = true;
    //             continue;
    //         }
    //         temp.pb(a[i]);
    //         if(temp.size() == y){
    //             ans.pb(temp);
    //             temp.clear();
    //         }
    //     }
    // }
    // else{
    //     vi temp;
    //     FOR(i,k){
    //         if(!fir and a[i] == x){
    //             fir= true;
    //             continue;
    //         }
    //         if(!sec and a[i] == y){
    //             sec = true;
    //             continue;
    //         }
    //         temp.pb(a[i]);
    //         if(temp.size() == y){
    //             ans.pb(temp);
    //             temp.clear();
    //         }
    //     }
    // }

//    FOR(i,x){
//     FOR(j,y){
//         cout << ans[i][j] << ' ';
//     }
//     cout << ln;
//    }
   
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
