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
   int1(n)
   int t,k; cin >> t >> k;
   int a,b;
   if(t&1){
    a = t/2;
    b = t/2 + 1;
   }
   else{
    a = t/2 - 1;
    b = t/2 + 1;
   }

   if(min(a,b) > 0 and max(a,b) <= n and max(a,b) < k){
    cout << "YES" << ln;
   }
   else if( min(a+k,b+k) > 0 and max(a+k,b+k) <= n and ((a+k)%k + (b+k)%k) == t){
    // cout << a+k << " " << b+k <<" "<< k <<ln;
    cout << "YES" << ln;
   }
   else{
    cout << "NO" << ln;
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
