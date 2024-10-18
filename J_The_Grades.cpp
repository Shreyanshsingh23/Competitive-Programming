#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln '\n'
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define sz(x) x.size()
#define vi vector<int>
#define v vector
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>
#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)
#define sett(n)          cout<<fixed<<setprecision(n)
int mex(vi& a, int n){set<int> st {all(a)};int res = 0;while(st.count(res)) res++;return res;}
typedef pair<int, int> pi;
typedef pair<string, vi> psvi;

const bool testcase = 0;

bool cmp(pair<string, vi>& x, pair<string, vi>& y){
    int sum1 = accumulate(x.second.begin(),x.second.end(),0ll);
    int sum2 = accumulate(y.second.begin(),y.second.end(),0ll);

    if(sum1 != sum2){
        return sum1 > sum2;
    }

    return x.first < y.first;
}

void solve()
{
   int1(n);
   v<pair<string,vi>> a(n);
  
   
   FOR(i,n) 
   {
    a[i].second.resize(4);
    cin >> a[i].first;
    FOR(j,4){
        cin >> a[i].second[j];
      
    }
   }

   sort(all(a),cmp);

   for(int i = 0;i < n; i++){
    int sum = accumulate(all(a[i].second), 0ll);
    cout << a[i].first << ' ' << sum << ' ';
    FOR(j,4) cout << a[i].second[j]  << ' ';
    cout << ln;
   }


    return;

   
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
