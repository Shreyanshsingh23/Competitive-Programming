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
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 0;


void solve()
{
   int n,m;cin >> n >> m;
   vii a(n,vi(m));
   for(auto& f: a){
    for(auto& e : f){
        cin >> e;
    }
   }

   vii ans;

   int i = n-1;
   while(i >= 0){
    vi temp;
    int k = i;
    for(int j = 0;j < m and k <n;k++,j++){
        temp.pb(a[k][j]);
    }
    i--;
    ans.pb(temp);
   }

   int j = 1;
   while(j < m){
    vi temp;
    int k = j;
    for(int i = 0; i< n and k <m; k++,i++){
        temp.pb(a[i][k]);
    }
    ans.pb(temp);
    j++; 
   }
    
    for(auto& f: ans){
    for(auto& e : f){
        cout << e << ' ';
    }
    cout << ln;
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
