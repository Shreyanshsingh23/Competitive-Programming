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
#define pii pair<int,int>
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORa(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 0;


void solve()
{
   int a, b; cin >> a >> b;
   int left = 0;
  int cnt = 0;
//   cout << "cnt: " << cnt << ln;
//   cout << "left: " << left << ln;
  while(a >= b){
   cnt += a;
   left += a%b;
   a /= b;
//    cout << "a: " << a << ln;
//    cout << "cnt: " << cnt << ln;
//   cout << "left: " << left << ln;
  }
  cnt +=  a;
   a += left;
   left = 0;
   while(a >= b){
      cnt += a/b;
      left += a%b;
      a /= b;
   }

   cnt += (a+left)/b;

//   cout << "cnt : " << cnt << ln;
//    cout << "left : " << left << ln;
//    cout << "a : " << a << ln;
  
  cout << cnt << ln;
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
