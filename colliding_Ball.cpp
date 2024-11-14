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

bool cmp(pi a, pi b){
    return a.first <= a.second;
}
void solve()
{
   int2(n,m)
  v<pi> a(n), b(m);
   FOR(i,n){
    cin >> a[i].first >> a[i].second;
    
    
 }
   
   FOR(i,m){
    cin >> b[i].first >> b[i].second;
   
   }
 
   
   map<int,int> x;
   map<int,int> y;

   for(auto [i,j] : a){
    int z = i*j;
    x[z]++;
   }

    for(auto [i,j] : b){
    int z = i*j;
    y[z]++;
   }
  
    int ans = 0,prev = -1;
 
     for ( auto& [c,d]: x) {
        int timeProduct = c;
        if (y.count(timeProduct)) {
           ans +=  min(d,y[timeProduct]);
        }
    }
  
  cout << ans << ln;

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


