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

int a,b,c,d,cnt;

void solve()
{
   int1(n)
   vi V (n);
   FOR(i,n){
     cin >> V[i];
     if(V[i] == 1) a++;
     else if(V[i] == 2) b++;
     else if(V[i] == 3) c++;
     else  d++;
   }

  cnt += d;
  // for combination of 3 and 1
  if(c >= a){
    cnt += a;
    c -= a;
    a = 0;
    cnt += c;
  }else{
    cnt += c;
    a -= c;
    c = 0;
  }

  // for combination of 2 and 2
  cnt += b/2;
  b = b%2;

//   cout << "b : " << b << ln;
  // for combination of 2 and 1
  
    cnt += b;
    a -= 2*b;
    b = 0;
//   cout << "a1: " << a1 << ln;
//   cout << a1/4 << ln;
  // for combination of 1 and 1
  if(a>0){cnt += a/4;
  a = a%4;
  if(a){
    cnt++;
  }}

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
