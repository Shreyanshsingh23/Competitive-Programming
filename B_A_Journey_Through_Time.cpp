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
bool cmp(pi a,pi b){
    return a.second > b.second;
}


void solve()
{
   int2(n,t)
   int ans = 0;
   v<pi> a(n);
   FOR(i,n){
    cin >> a[i].first;
    cin >> a[i].second;
   }
   sort(all(a),cmp);
   deque<pi> q;
  for(int i = 0;i <n;i++){
   while (!q.empty() and abs(a[i].first - q.front().first) > t) {
            q.pop_front();
        }

        for (auto [to_j, so_j] : q) {
            int connectivity = a[i].second + so_j + abs(a[i].first - to_j);
            ans = max(ans, connectivity);
        }

        q.push_back({a[i].first, a[i].second});
   
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
