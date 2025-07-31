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


void solve()
{
   int n, m; cin >> n >> m;
   string a,b; cin >> a >> b;
   vi f1(2,0), f2(2,0);
   int l = -1, k = -1;
   FOR(i,n){
    if(a[i] == 'a' and l == -1) l = i;
     f1[a[i]-'a']++;
   }
   FOR(i,m){
    if(b[i] == 'a' and k == -1) k = i;
     f2[b[i]-'a']++;
   }

    // cout << "l: " << l << " k: " << k << ln;
    // cout << "f1: " << f1[0] << " f2: " << f2[0] << ln;

   int ans = 0;


   if(a == b){
    cout << "Yes" << ln;
    return;
   }

   if(f1[0] != f2[0]){
    cout << "No" << ln;
    return;
   }

   if(f1[0] == 0 or f2[0] == 0){
    cout << "No" << ln;
    return; 
   } 
   
   if(k != l){
    cout << "No" << ln;
    return;
   }

   cout << "Yes" << ln;
   
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
