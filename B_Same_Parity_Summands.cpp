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
  int n,k; cin >> n >> k;
  // cout << "n:" << n << " k:" << k << ln;

  if(n&1 and k&1 and n >= k){   //odd n and odd k 
   int left = n-k+1;
   if(left > 0 and left&1){
    cout << "YES" << ln;
    FOR(i,k-1)cout << 1 << ' ';
    cout << n-(k-1) << ln;
    return;
   }

  }

  //even n and odd k
  if(!(n&1) and k&1 and n>= k*2){
   int left = n-2*(k-1);
   if(left > 0 and !(left&1)){
    cout << "YES" << ln;
    FOR(i,k-1)cout << 2 << ' ';
    cout << left << ln;
    return;
   }
  }

  if(!(n&1) and !(k&1) and n >= k){  //even n and even k
    int left = n-(k-1);
    if(left > 0 and left&1){
      cout << "YES" << ln;
      FOR(i,k-1)cout << 1 << ' ';
      cout << left << ln;
      return;
    }
    left = n - 2*(k-1);
    if(left > 0 and !(left&1)){
      cout << "YES" << ln;
      FOR(i,k-1)cout << 2 << ' ';
      cout << left << ln;
      return;
    }
  }



  cout << "NO" << ln;
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
