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
#define F first
#define S second
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;


const bool testcase = 0;
bool cmp(pi a,pi b){
    if(a.F == b.F){
        return a.S > b.S;
    }
    return a.F < b.F;
}


void solve()
{
   int2(n,k)
   int ans = 0;
   v<pi> a(n);
   FOR(i,n){
    cin >> a[i].F;
    cin >> a[i].S;
   }
   sort(all(a),cmp);
   deque<int> dq;

  for(int i = 0;i < n;i++){
    int t = a[i].first;
    int s = a[i].second;

    while(! dq.empty() and k < t - a[dq.front()].F )dq.pop_front();
    while(! dq.empty() and (a[dq.back()].S - a[dq.back()].F) <= (s-t))dq.pop_back();

    dq.pb(i);

     if (dq.front() != i) {
            int ss = a[dq.front()].S;
            int tt = a[dq.front()].F;
            ans = max(ans, s + t + ss - tt);
        }
   
}

dq.clear();

for (int i = n - 1; i >= 0; --i) {
        int t = a[i].F;
        int s = a[i].S;

        while (!dq.empty() && a[dq.front()].F > t + k) dq.pop_front();
        while (!dq.empty() &&(a[dq.back()].S + a[dq.back()].F) <= (s + t)) dq.pop_back();
        dq.push_back(i);

        if (dq.front() != i) {
            int ss = a[dq.front()].S;
            int tt = a[dq.front()].F;
            ans = max(ans, s - t + ss + tt);
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
