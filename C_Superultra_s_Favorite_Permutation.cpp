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
bool isPrime(int n){
    if(n <= 3)return true;

    for(int i = 2; i*i <= n; i++){
        if(n%i == 0)return false;
    }

    return true;
}

void solve()
{
   int1(n)
   
    int lasteven = 0;
   vi rem, ans;
   for(int i = 2; i<= n; i+=2){
  
        ans.pb(i);
        lasteven = i;
   
   }
   bool fir = false;

   for(int i = 1; i<= n; i+=2){
    
        if(!fir and isPrime(lasteven+ i)){
            rem.pb(i);
            continue;
        }
        if(!fir and !isPrime(lasteven+ i)){
            ans.pb(i);
            fir = true;
            continue;
        }
        ans.pb(i);
   }
   if(!fir){
    cout << -1 << ln;
    return;
   }
   for(int i = 0; i< ans.size(); i++){
    cout << ans[i] << ' ';
   }

   for(int i = 0; i< rem.size(); i++){
    cout << rem[i] << ' ';
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
