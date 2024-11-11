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
   vi a (n);
   FOR(i,n) cin >> a[i];
   if(!(n&1)){
    int ans = 0;
    for(int i = 0; i < n; i+= 2)ans = max(ans,a[i+1]-a[i]);
    cout << ans << ln;
   }else{
    int ans = 1e18;
    for(int i =0; i< n; i+= 2){
        int res = 0;
        for(int j = 0; j< n; j+=2){
            if(i==j){
                j--;
                continue;
            }
            res = max(res,a[j+1]- a[j]);
        }
        ans = min(ans,res);
    }
    ans =  max(ans,1LL);
    cout << ans << ln;

//     priority_queue<int> q;
//     for(int i = 0; i< n-1; i++){
//         q.push(a[i+1]- a[i]);
//     }
//     int ans = 1e18,res = 1;
//    if(q.empty()){
//     cout << 1 << ln;
//     return;
//    }
//    ans = q.top();
//    while(!q.empty()){
//    res = q.top();
//    q.pop();
//    if(ans != res) break;
//    }
//    cout << res << ln;
   
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
