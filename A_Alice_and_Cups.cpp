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


void solve()
{
   string s; cin >> s;
   int n = s.size();
   int ans = 1;
   for(int i = 0; i< n; i++){
    if(s[i] == 'A'){
        if(ans == 1) ans = 2;
        else if(ans == 2) ans = 1;
        else ans = 3;
    }
    else if(s[i] == 'B'){
        if(ans == 1) ans = 1;
        else if(ans == 2) ans = 3;
        else ans = 2;
    }
    else{
        if(ans == 1) ans = 3;
        else if(ans == 3) ans = 1;
        else ans = 2;
    }
    // cout << "ans = " << ans << ln;
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
