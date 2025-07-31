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
   int2(n,r)
    int totalSeats = 2*r;
    // cout << totalSeats << ln; 
    int totalPerson = 0;
   vi a(n);
    int count = 0;
    int s= 0, t = 0;
   FOR(i,n) {
    cin >> a[i];
    totalPerson += a[i];
   
   }

    FOR(i,n){
        if(a[i] & 1)
    {
        s += a[i]-1;
        t ++;
        count += (a[i]-1)/2;
    }
   else 
   {
    s += a[i];
    count += a[i]/2;
   }
}
   int rem = 0;
   if(t&1)
   {
    count += (t-1)/2;
    count ++;
    s++;
    rem = r-count;
    s += 2*rem;
   }else{
    count += t/2;
    rem = r-count;
    s += 2*rem;
   }

   cout << min(totalPerson,s) << ln;



    
   
   
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
