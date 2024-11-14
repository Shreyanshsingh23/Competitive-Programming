//maximum element less than or equal to X by binary search
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


void solve()
{
   int1(n)
   int q, res = -1; cin >> q;
   vi a (n);
   FOR(i,n) cin >> a[i];

    // cout << n << ' ' << q << ' ' << ln;
//    while(q--){
//     int x; cin >> x;
//    int l = 0, r = n-1;
//     res = -1;
//    int b = 0;
//    while(l <= r){
//     int mid = l + (r-l)/2;
    
//     if(a[mid] > x) r = mid-1;
//     else if(a[mid] == x){
//         res = mid;
//         break;
//     }
//     else{
//         res = mid;
//          l = mid+1;
//     }
//    }

//    cout << res+1 << ln;
//    }

     while (q--) {
        int x;
        cin >> x;
        int l = 0, r = n - 1, result = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (a[mid] <= x) {
                result = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << (result == -1 ? 0 : result + 1) << ln;
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
