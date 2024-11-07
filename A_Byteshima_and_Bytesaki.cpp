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
   int2(n,m)
   int2(r1,r2)

   int x1,y1,x2,y2 ;
  x1 = r1+1;
  y1 = r1+1;

  int last1 =(2*r1) + 1 + (2*r2) + 1;
  
  if(last1 = max(n,m) and min(n,m) >= 2*max(r1,r2) + 1){
    cout << "last1: " << last1 << ln;
      cout << 2*(r1) + r2+1 + r1+1 << ln;
      return;
  }


 
  int last2 = 2*r1 + 2 + 2*r2 + 1;
  cout << "last2: " << last2 << ln;
  if(min(last1,last2) < min(n,m)){
    cout << -1 << ln;
    return;
  }
  cout << x1 << " " << y1 << " " << x2 << " " << y2 << ln;
   
   
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
