#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x) x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>                //vvi a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 0;


void solve()
{
   int1(n)
   vi a(n),b(n);
   FOR(k,n){
    cin >> a[k];
    cin >> b[k];
   }


   int x= 0;
   int y = 0;

   double cost = 0;

   FOR(i,n){
    double temp = sqrt((x-a[i])*(x-a[i]) + (y-b[i])* (y-b[i]));
    cost += temp;
    x = a[i];
    y = b[i];
   }

     double temp = sqrt((x-0)*(x-0) + (y-0)* (y-0));
    cost += temp;
   cout << fixed << setprecision(21) << cost << ln;

   
   
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
