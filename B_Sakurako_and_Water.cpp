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

const bool testcase = 1;


void solve()
{
   int1(n)
   vii a (n,vi(n));
   for(auto &i : a){
       for(auto &j : i){
           cin >> j;
       }
   }
   
   int ans = 0;

   for(int i = n-1; i>= 0; i--){
    int minn = MAX;
    int k = i;
    for(int j = 0;k <n and j< n;k++, j++){
        if(a[k][j] < minn){
            minn = a[k][j];
        }
    }
    if(minn < 0){
        ans += -1*minn;
    }
   }

   for(int j = 1; j< n; j++){
    int minn = MAX;
    int k = j;
    for(int i = 0;k <n and i< n;k++, i++){
        if(a[i][k] < minn){
            minn = a[i][k];
        }
    }
    if(minn < 0){
        ans += -1*minn;
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