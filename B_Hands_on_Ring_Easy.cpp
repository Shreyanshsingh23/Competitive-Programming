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
int calculate(int current, int target, int other_hand, int N) {
    int clockwise_distance = (target - current + N) % N;
    int counterclockwise_distance = (current - target + N) % N;

    bool is_clockwise_blocked = (current < target && other_hand > current && other_hand < target) ||
(current > target && (other_hand > current || other_hand < target));

    bool is_counterclockwise_blocked = (target < current && other_hand < current && other_hand > target) ||
  (target > current && (other_hand < current || other_hand > target));

    if (is_clockwise_blocked && is_counterclockwise_blocked) {
        return -1; 
    }

    if (is_clockwise_blocked) {
        return counterclockwise_distance;
    }

    if (is_counterclockwise_blocked) {
        return clockwise_distance;
    }

    return min(clockwise_distance, counterclockwise_distance);
}

void solve()
{
   int2(n,q)
   int l = 1, r= 2;
   int op = 0;
   while(q--){
    char ch; cin >> ch;
    int a ; cin >> a;
    if(ch == 'R'){
        if(a==l) continue;
        int moves= calculate(r,a,l,n);
        // cout << moves << ln;
         op += moves;
        r = a;
    }
    else{
        if(a==r) continue;
    int moves= calculate(l,a,r,n);
    // cout << moves << ln;
         op += moves;
        l = a;
    }
   }

   cout << op << ln;
   
   
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
