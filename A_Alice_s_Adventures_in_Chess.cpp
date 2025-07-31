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
   int a,b; cin >> a >> b;
   int x = 0, y = 0;
   int i = 0;
   string s; cin >> s;
   
   while(x <= 13 and y <= 13 and x > -101 and y > -101){
    // cout << i << ' ';
    if(x == a and y == b){
        cout << "YES" << ln;
        return;
    }
    
    if(s[i] == 'W') x--;
    else if(s[i] == 'E') x++;
    else if(s[i] == 'S') y--;
    else if(s[i] == 'N') y++;
    
    i++;
    if(i == n and x == 0 and y == 0)   {
        cout << "NO" << ln;
        return;
    }
    if(i == n) i = 0;

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

