#include <bits/stdc++.h>
using namespace std;

#define ShreyanshSinghGautam cin.tie(nullptr);cout.tie(nullptr);ios::sync_with_stdio(false);  
#define int long long
#define ln endl;
#define all(x)  x.begin(), x.end()
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define vi vector<int>
#define v vector
#define vvi vector<vector<int>>                //vvi a (n,vi(m,0))
#define pii pair<int,int>
#define int1(t) int t; cin >> t;
#define int2(n, k) int n, k; cin >> n >> k;
#define int3(n, k, r) int n, k, r;cin >> n >> k >> r;
#define pb emplace_back
#define FOR(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> pi;

const bool testcase = 1;

int minimumExtraction(vi& a, int n){
   
  sort(all(a));

  int minMax = a[0];

  for(int i = 1; i< n; i++){
    minMax = max(minMax, a[i]-a[i-1]);
  }

  return minMax;
}

void solve()
{
   int1(n)
   vi a(n);

   FOR(i,n) cin >> a[i];

  int ans = minimumExtraction(a,n);
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
 
 
//  auto it = find(a.begin(),a.end(),2);
//     if(it != a.end()){
//         a.erase(it);
//     }