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
#define vii vector<vector<int>>                //vii a (n,vi(m,0))
#define pii pair<int,int>#define all(v) v.begin(), v.end()
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;


void solve()
{
   int2(n,x)
    // vi a (n);

//     FOR(i,n) cin >> a[i];



    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int totalCustomers = 0;
    
    // Maximum number of customers needed based on car models
    for (int i = 0; i < n; i++) {
        totalCustomers += (a[i] + x - 1) / x; // ceil(a[i] / x)
    }

    cout << totalCustomers << endl;

   
}

signed main()
{
    ShreyanshSinghGautam

    int t = 1;
    testcase and cin >> t;
    while (t--)
    {
        // cout <<"t: " << t << ln;
        solve();
    }
    return 0;
}
