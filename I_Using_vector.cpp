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
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;

const bool testcase = 0;


void solve()
{
   int2(n,q)
   vi a (n);
   FOR(i,n) cin >> a[i];

   while(q--){
    string s; cin >> s;
    if(s == "sort"){
        int l,r; cin >> l >> r;
        l--;r--;
        sort(a.begin()+l,a.begin()+r+1); 
        continue;
    }
    else if(s == "pop_back"){
        a.pop_back();
    }
    else if(s== "back"){
        cout << a.back() << ln;
    }
    else if(s== "reverse"){
        int l,r; cin >> l >> r;
        l--;r--;
        reverse(a.begin()+l, a.begin()+r+1);
    }
    else if(s=="front"){
        cout << a.front() << ln;
    }
    else if(s=="push_back"){
        int x; cin >> x;
        a.pb(x);
    }
    else if(s == "print"){
       
        int x; cin >> x;
        cout << a[x-1]<< ln;
    }
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
